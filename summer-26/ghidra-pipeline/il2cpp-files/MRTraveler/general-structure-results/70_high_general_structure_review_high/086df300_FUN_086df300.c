/*
FUNCTION_NAME: FUN_086df300
ENTRY_POINT: 086df300
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2
*/


void FUN_086df300(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  long local_38;
  
  if ((DAT_0943c558 & 1) == 0) {
    FUN_03c8f898(Unity_VisualScripting_StaticActionInvoker<TParam0>_var);
    FUN_03c8f898(Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1>_var);
    FUN_03c8f898(Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2>_var);
    FUN_03c8f898(Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3>_var);
    FUN_03c8f898(
                Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TParam4>_var
                );
    FUN_03c8f898(Unity_VisualScripting_StaticFieldAccessor<TField>_var);
    FUN_03c8f898(UnityEngine_UI_ScrollRect_var);
    FUN_03c8f898(Unity_VisualScripting_StaticFunctionInvoker<TResult>_var);
    FUN_03c8f898(Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TResult>_var);
    FUN_03c8f898(Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TResult>_var);
    FUN_03c8f898(Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TParam2,_TResult>_var
                );
    FUN_03c8f898(PTR_DAT_08e695f0);
    FUN_03c8f898(UnityEngine_SerializeField_var);
    FUN_03c8f898(PTR_DAT_08e82678);
    DAT_0943c558 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  lVar4 = FUN_086ddbf4();
  puVar2 = UnityEngine_UI_ScrollRect_var;
  if (param_1 != (long *)0x0) {
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)UnityEngine_UI_ScrollRect_var) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_086df438;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(param_1,*(long *)UnityEngine_UI_ScrollRect_var,0);
LAB_086df438:
    uVar6 = (*(code *)*puVar5)(param_1,puVar5[1]);
    if (lVar4 != 0) {
      uVar11 = FUN_06a4feb4(lVar4,uVar6,&local_38,
                            *(undefined8 *)
                             Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2>_var
                           );
      if ((uVar11 & 1) == 0) {
        lVar4 = thunk_FUN_03cf5234(*(undefined8 *)
                                    Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TParam2,_TResult>_var
                                  );
        FUN_052124c0(lVar4,*(undefined8 *)
                            Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TResult>_var
                    );
        local_38 = lVar4;
        if (lVar4 != 0) {
          lVar10 = *(long *)(lVar4 + 0x10);
          lVar12 = *(long *)Unity_VisualScripting_StaticFunctionInvoker<TResult>_var;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = (long)param_1;
              thunk_FUN_03d233cc(plVar8,param_1);
            }
            else {
              FUN_05212cf4(lVar4,param_1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            lVar4 = FUN_086ddbf4();
            lVar12 = *param_1;
            lVar10 = *(long *)puVar2;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar5 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_086df678;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348(param_1,lVar10,0);
LAB_086df678:
            uVar6 = (*(code *)*puVar5)(param_1,puVar5[1]);
            puVar3 = Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1>_var;
            if (lVar4 != 0) {
              FUN_06a4e380(lVar4,uVar6,local_38,
                           *(undefined8 *)
                            Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1>_var);
              lVar10 = *param_1;
              lVar4 = *(long *)puVar2;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar4) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_086df6f4;
                  }
                  uVar11 = uVar11 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348(param_1,lVar4,1);
LAB_086df6f4:
              lVar4 = (*(code *)*puVar5)(param_1,puVar5[1]);
              if ((lVar4 != 0) &&
                 (lVar10 = FUN_045edee8(lVar4,0,*(undefined8 *)
                                                 Unity_VisualScripting_StaticActionInvoker<TParam0>_var
                                       ), lVar10 != 0)) {
                uVar6 = *(undefined8 *)PTR_DAT_08e82678;
                if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                plVar8 = (long *)FUN_0710fcf0(uVar6,0);
                if (plVar8 == (long *)0x0) goto LAB_086df7cc;
                uVar11 = (**(code **)(*plVar8 + 0x2c8))
                                   (plVar8,lVar4,*(undefined8 *)(*plVar8 + 0x2d0));
                if ((uVar11 & 1) != 0) {
                  uVar6 = FUN_086dda94(lVar4,lVar10);
                  uVar11 = FUN_06f74e14(uVar6,0);
                  if ((uVar11 & 1) == 0) {
                    lVar4 = *(long *)(*(long *)(*(long *)UnityEngine_SerializeField_var + 0xb8) + 8)
                    ;
                    if (lVar4 == 0) goto LAB_086df7cc;
                    FUN_06a4e380(lVar4,uVar6,local_38,*(undefined8 *)puVar3);
                  }
                }
              }
              return;
            }
          }
        }
      }
      else if (local_38 != 0) {
        FUN_05213710(&local_68,local_38,
                     *(undefined8 *)
                      Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TResult>_var);
        puVar3 = 
        Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TParam4>_var;
        puVar2 = PTR_DAT_08e695f0;
        uStack_48 = uStack_60;
        local_50 = local_68;
        local_40 = local_58;
        while (uVar11 = FUN_049dc4d0(&local_50,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
          if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar6 = thunk_FUN_03d12a58(local_40,0);
          uVar7 = thunk_FUN_03d12a58(param_1,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar11 = FUN_07119344(uVar6,uVar7,0);
          if ((uVar11 & 1) != 0) {
            plVar8 = (long *)thunk_FUN_03d12a58(param_1,0);
            if (plVar8 != (long *)0x0) {
              uVar6 = (**(code **)(*plVar8 + 0x308))(plVar8,*(undefined8 *)(*plVar8 + 0x310));
              uVar7 = thunk_FUN_03ce5214(UnityEngine_UIElements_StyleSheets_SelectorMatchRecord_var)
              ;
              uVar9 = thunk_FUN_03ce5214(System_SerializableAttribute_var);
              uVar6 = FUN_06f7465c(uVar7,uVar6,uVar9,0);
              thunk_FUN_03ce5214(PTR_DAT_08e76350);
              uVar7 = thunk_FUN_03cf5234();
              FUN_07064ba8(uVar7,uVar6,0);
              uVar6 = thunk_FUN_03ce5214(
                                        Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TResult>_var
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar7,uVar6);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
        }
        FUN_049dc4cc(&local_50,
                     *(undefined8 *)
                      Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3>_var
                    );
        if (local_38 != 0) {
          lVar4 = *(long *)(local_38 + 0x10);
          lVar10 = *(long *)Unity_VisualScripting_StaticFunctionInvoker<TResult>_var;
          *(int *)(local_38 + 0x1c) = *(int *)(local_38 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(local_38 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(local_38 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = (long)param_1;
              thunk_FUN_03d233cc(plVar8,param_1);
              return;
            }
            FUN_05212cf4(local_38,param_1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_086df7cc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


