/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ConstructorHandling
ENTRY_POINT: 0441d248
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ConstructorHandling(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  long *unaff_x24;
  
  uVar2 = (**(code **)(param_1 + 0x298))();
  if ((uVar2 & 1) == 0) {
    if (unaff_x24 == (long *)0x0) goto LAB_0441d4b0;
    uVar2 = (**(code **)(*unaff_x24 + 0x298))();
    if ((uVar2 & 1) == 0) {
      FUN_031dbd4c(0);
    }
  }
  plVar3 = (long *)thunk_FUN_015d0480();
  if (plVar3 == (long *)0x0) {
    FUN_031dbd4c();
  }
  plVar9 = *(long **)(unaff_x21 + 0x10);
  if (plVar9 != (long *)0x0) {
    lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_015c2790(lVar6);
    }
    lVar7 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0441d350;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_015c2a80(plVar9,lVar6,0);
LAB_0441d350:
    iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (0 < iVar1) {
      iVar10 = 0;
      do {
        plVar9 = *(long **)(unaff_x21 + 0x10);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_015c2790(lVar6);
        }
        lVar7 = *plVar9;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0441d3dc;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_015c2a80(plVar9,lVar6,0);
LAB_0441d3dc:
        (*(code *)*puVar4)(plVar9,iVar10,puVar4[1]);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) & 1)
            == 0) {
          FUN_015c2790();
        }
        lVar6 = thunk_FUN_015d01b0();
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0)) {
          uVar5 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar5,0);
        }
        if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        plVar3[(long)(int)unaff_w19 + 4] = lVar6;
        thunk_FUN_01656ef8(plVar3 + (long)(int)unaff_w19 + 4,lVar6);
        iVar10 = iVar10 + 1;
        unaff_w19 = unaff_w19 + 1;
      } while (iVar10 != iVar1);
    }
    return;
  }
LAB_0441d4b0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


