/*
FUNCTION_NAME: VoxelBusters.EssentialKit.Demo.WebViewDemo$$<OnActionSelectInternal>b__10_0
ENTRY_POINT: 03f067b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


bool VoxelBusters_EssentialKit_Demo_WebViewDemo__<OnActionSelectInternal>b__10_0(ulong param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  float fVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x20b) = 1;
  }
  puVar2 = Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 10) * 0x10 + 0x138);
        goto LAB_03f06824;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_03f06824:
  fVar7 = (float)(*(code *)*puVar3)();
  fVar1 = DAT_00b9304c;
  if (fVar7 < DAT_00b9304c) {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
          goto LAB_03f06890;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_03f06890:
    fVar7 = (float)(*(code *)*puVar3)();
    if (fVar7 < fVar1) {
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_03f068f4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498();
LAB_03f068f4:
      fVar7 = (float)(*(code *)*puVar3)();
      if (fVar7 < fVar1) {
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_03f0696c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01c72498();
LAB_03f0696c:
        fVar7 = (float)(*(code *)*puVar3)();
        return fVar1 <= fVar7;
      }
    }
  }
  return true;
}


