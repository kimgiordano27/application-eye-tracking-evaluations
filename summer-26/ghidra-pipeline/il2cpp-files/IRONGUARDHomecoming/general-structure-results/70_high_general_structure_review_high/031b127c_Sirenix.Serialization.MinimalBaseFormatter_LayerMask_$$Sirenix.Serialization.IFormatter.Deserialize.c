/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<LayerMask>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 031b127c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


int Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Deserialize
              (undefined8 param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  code *pcVar8;
  
  while (memcpy(&stack0x000000d0,param_2,200), unaff_x20 != 0) {
    pcVar8 = *(code **)(unaff_x20 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000198,&stack0x000000d0,200);
    uVar2 = (*pcVar8)(uVar5,&stack0x00000198,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(unaff_x19 + 0x18);
LAB_031b12d4:
      uVar7 = (uint)unaff_x23;
      if ((int)uVar7 < iVar3) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) break;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if ((uVar1 <= uVar7) ||
           (memcpy(&stack0x00000008,(void *)(lVar6 + (long)(int)uVar7 * (long)(int)unaff_x24 + 0x20)
                   ,200), uVar1 <= unaff_w21)) goto LAB_031b138c;
        lVar4 = (long)(int)unaff_w21;
        unaff_w21 = unaff_w21 + 1;
        lVar6 = lVar6 + lVar4 * unaff_x24;
        memcpy((void *)(lVar6 + 0x20),&stack0x00000008,200);
        thunk_FUN_01f51358(lVar6 + 0x98,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        uVar7 = uVar7 + 1;
      }
      if (iVar3 <= (int)uVar7) {
        FUN_0358d1e4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w21;
      }
      unaff_x25 = (long)(int)uVar7 * (long)(int)unaff_x24 + 0x20;
      unaff_x23 = (long)(int)uVar7;
    }
    else {
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_x23 = unaff_x23 + 1;
      unaff_x25 = unaff_x25 + 200;
      if (iVar3 <= unaff_x23) goto LAB_031b12d4;
    }
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x23) {
LAB_031b138c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    param_2 = (void *)(lVar6 + unaff_x25);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


