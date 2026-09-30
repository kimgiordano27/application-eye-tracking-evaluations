/*
FUNCTION_NAME: FUN_035bdfd0
ENTRY_POINT: 035bdfd0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_035bdfd0(long param_1,byte param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  byte local_44 [4];
  
  if ((DAT_04537c93 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>_Invoke__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<bool,_Error>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<bool,_Error>_Invoke__);
    DAT_04537c93 = 1;
  }
  puVar1 = PTR_DAT_0422fa08;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    plVar2 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,4);
    local_44[0] = param_2 & 1;
    lVar3 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_44);
    if (plVar2 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_035be528:
        uVar10 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar10,0);
      }
      if ((int)plVar2[3] == 0) {
LAB_035be520:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar2[4] = lVar3;
      local_48[0] = *(undefined1 *)(param_1 + 0xab);
      lVar3 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_48);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_035be528;
      if (*(uint *)(plVar2 + 3) < 2) goto LAB_035be520;
      plVar2[5] = lVar3;
      local_4c[0] = *(undefined1 *)(param_1 + 0xac);
      lVar3 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_4c);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_035be528;
      if (*(uint *)(plVar2 + 3) < 3) goto LAB_035be520;
      plVar2[6] = lVar3;
      local_50[0] = *(undefined1 *)(param_1 + 0x89);
      lVar3 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_035be528;
      if (*(uint *)(plVar2 + 3) < 4) goto LAB_035be520;
      plVar2[7] = lVar3;
      puVar1 = GameAnalyticsSDK_State_GAState_TypeInfo;
      if (plVar8 == (long *)0x0) goto LAB_035be524;
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar10 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<bool,_Error>_Invoke__;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_035be1f4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498(plVar8,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1)
      ;
LAB_035be1f4:
      (*(code *)*puVar5)(plVar8,3,uVar10,plVar2,puVar5[1]);
      if (*(byte *)(param_1 + 0xab) != (param_2 & 1)) {
        if ((param_2 & 1) == 0) {
          if (*(char *)(param_1 + 0xac) == '\0') {
            uVar6 = FUN_035bcfbc(param_1);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_035be524;
              plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
              lVar4 = *(long *)PTR_DAT_0422f958;
              lVar3 = *(long *)(lVar4 + 0x38);
              if (lVar3 == 0) {
                FUN_01c723f0(lVar4);
                lVar3 = *(long *)(lVar4 + 0x38);
              }
              lVar3 = *(long *)(lVar3 + 0x10);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01c72394();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01c72394();
              }
              if (plVar2 == (long *)0x0) goto LAB_035be524;
              lVar4 = *plVar2;
              uVar10 = **(undefined8 **)(lVar3 + 0xb8);
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              uVar9 = *(undefined8 *)
                       Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__;
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_035be4ec;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_01c72498(plVar2,*(long *)puVar1,1);
LAB_035be4ec:
              (*(code *)*puVar5)(plVar2,3,uVar9,uVar10,puVar5[1]);
            }
          }
          else if (*(char *)(param_1 + 0x89) != '\0') {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_035be524;
            plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
            lVar4 = *(long *)PTR_DAT_0422f958;
            lVar3 = *(long *)(lVar4 + 0x38);
            if (lVar3 == 0) {
              FUN_01c723f0(lVar4);
              lVar3 = *(long *)(lVar4 + 0x38);
            }
            lVar3 = *(long *)(lVar3 + 0x10);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01c72394();
            }
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01c72394();
            }
            if (plVar2 == (long *)0x0) goto LAB_035be524;
            lVar4 = *plVar2;
            uVar10 = **(undefined8 **)(lVar3 + 0xb8);
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            uVar9 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<bool,_Error>__ctor__;
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_035be4b0;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_01c72498(plVar2,*(long *)puVar1,1);
LAB_035be4b0:
            (*(code *)*puVar5)(plVar2,3,uVar9,uVar10,puVar5[1]);
            if (*(char *)(param_1 + 0x89) != '\0') {
              *(undefined4 *)(param_1 + 0xdc) = 1;
            }
          }
          *(undefined1 *)(param_1 + 0xab) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0xab) = 1;
          if ((*(char *)(param_1 + 0xac) != '\0') && (*(char *)(param_1 + 0x89) != '\0')) {
            if (*(long *)(param_1 + 0x20) != 0) {
              plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
              lVar4 = *(long *)PTR_DAT_0422f958;
              lVar3 = *(long *)(lVar4 + 0x38);
              if (lVar3 == 0) {
                FUN_01c723f0(lVar4);
                lVar3 = *(long *)(lVar4 + 0x38);
              }
              lVar3 = *(long *)(lVar3 + 0x10);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01c72394();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01c72394();
              }
              if (plVar2 != (long *)0x0) {
                lVar4 = *plVar2;
                uVar10 = **(undefined8 **)(lVar3 + 0xb8);
                uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                uVar9 = *(undefined8 *)
                         Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>_Invoke__;
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                      puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                      goto LAB_035be47c;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar5 = (undefined8 *)FUN_01c72498(plVar2,*(long *)puVar1,1);
LAB_035be47c:
                (*(code *)*puVar5)(plVar2,3,uVar9,uVar10,puVar5[1]);
                FUN_035b9f04(param_1);
                return;
              }
            }
            goto LAB_035be524;
          }
        }
      }
      return;
    }
  }
LAB_035be524:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


