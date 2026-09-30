/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserialize
ENTRY_POINT: 03a06c04
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long * Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserialize(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  
  plVar2 = (long *)thunk_FUN_01de26bc();
  if (plVar2 != (long *)0x0) {
    if (unaff_x21 == 0) {
      return unaff_x20;
    }
    lVar3 = thunk_FUN_01de26bc();
    if (lVar3 != 0) {
      if (plVar2 != (long *)0x0) {
        lVar7 = *plVar2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x23) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
              goto LAB_03a06c94;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01dde8fc(plVar2,*unaff_x23,9);
LAB_03a06c94:
        uVar8 = (*(code *)*puVar4)(plVar2,puVar4[1]);
        if ((uVar8 & 1) != 0) {
          lVar7 = *plVar2;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x23) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03a06cf0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_01dde8fc(plVar2,*unaff_x23,0);
LAB_03a06cf0:
          iVar1 = (*(code *)*puVar4)(plVar2,puVar4[1]);
          if (iVar1 == 1) {
            lVar7 = *plVar2;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x23) {
                  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                  goto LAB_03a06da4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_01dde8fc(plVar2,*unaff_x23,0xe);
LAB_03a06da4:
            plVar2 = (long *)(*(code *)*puVar4)(plVar2,0,puVar4[1]);
          }
          else if (1 < iVar1) {
            thunk_FUN_01dd295c(StringLiteral_4413);
            uVar5 = thunk_FUN_01de27b8();
            uVar6 = thunk_FUN_01dd295c(PTR_DAT_04236d18);
            FUN_033a3c1c(uVar5,uVar6,0);
            uVar6 = thunk_FUN_01dd295c(PTR_DAT_04236d20);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar5,uVar6);
          }
        }
        if (plVar2 != (long *)0x0) {
          lVar7 = *plVar2;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x23) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xf) * 0x10 + 0x138);
                goto LAB_03a06e0c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_01dde8fc(plVar2,*unaff_x23,0xf);
LAB_03a06e0c:
          (*(code *)*puVar4)(plVar2,lVar3,puVar4[1]);
          return plVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c();
}


