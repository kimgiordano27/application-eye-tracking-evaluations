/*
FUNCTION_NAME: FUN_05c2948c
ENTRY_POINT: 05c2948c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05c2948c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 local_70 [16];
  
  if ((DAT_06dc278a & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TryGetValue__
                );
    FUN_02d965b8(PTR_DAT_069fe788);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                );
    FUN_02d965b8(PTR_DAT_069fd9c8);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__)
    ;
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_Add__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_ILPPMessageProvider_NetworkMessageTypes>_get_Item__
                );
    DAT_06dc278a = 1;
  }
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Type,_ILPPMessageProvider_NetworkMessageTypes>_get_Item__
  ;
  puVar2 = PTR_DAT_069fe788;
  puVar1 = PTR_DAT_069fd9c8;
  iVar17 = *param_1;
  lVar16 = *(long *)(param_1 + 8);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  auVar18 = ZEXT816(0);
  if (iVar17 == 0) {
    uVar10 = 0;
    goto LAB_05c29634;
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(lVar16 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = FUN_05c2368c();
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(*(long *)(lVar5 + 0x20) + 0x18) != 0) {
      piVar6 = param_1 + 0xe;
      piVar6[0] = 0;
      piVar6[1] = 0;
      LeanTween__value(piVar6,0);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar5 + 0x20);
      LeanTween__value();
      uVar11 = 0;
      param_1[0x12] = 0;
      while( true ) {
        plVar7 = (long *)(param_1 + 0x10);
        lVar5 = *plVar7;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar11) {
          *plVar7 = 0;
          LeanTween__value(plVar7,0);
          plVar7 = (long *)(param_1 + 0xe);
          lVar16 = *plVar7;
          if (lVar16 == 0) {
            lVar16 = FUN_05c286f4(2,0);
            *plVar7 = lVar16;
            LeanTween__value(plVar7);
            lVar16 = *plVar7;
          }
          uVar10 = thunk_FUN_02dfd288(
                                     Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TryGetValue__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(lVar16,uVar10);
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar5 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
        FUN_05c2e3ac(*(long *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = FUN_05cd75d4(lVar5,0);
        uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                                   );
        FUN_05c3dca8(uVar10,uVar4,1,6,0);
        puVar15 = (undefined8 *)(lVar16 + 0x28);
        *puVar15 = uVar10;
        LeanTween__value(puVar15,uVar10);
        if (*(long *)(lVar16 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *(long *)(*(long *)(lVar16 + 0x48) + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = FUN_05c0c118(lVar8,0);
        uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                                   );
        FUN_05cd8830(uVar10,lVar5,uVar4,0);
        if (*(long *)(lVar16 + 0x48) == 0) break;
        if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05c40384(*(long *)(lVar16 + 0x28),*(char *)(*(long *)(lVar16 + 0x48) + 0x40) == '\0',0);
        if (*(long *)(lVar16 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05c2340c(*(long *)(lVar16 + 0x48),*puVar15);
        if (*(long *)(lVar16 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar9 = FUN_05c23de8(*(long *)(lVar16 + 0x48),*puVar15,uVar10);
        auVar18 = local_70;
        if ((uVar9 & 1) == 0) {
          lVar5 = FUN_02dcfa90(puVar15,0);
          if (lVar5 != 0) {
            FUN_05c44d2c(lVar5,0);
          }
        }
        else {
LAB_05c29634:
          if (iVar17 == 0) {
            local_70 = *(undefined1 (*) [16])(param_1 + 0x14);
            iVar17 = -1;
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            *param_1 = -1;
          }
          else {
            local_70 = auVar18;
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05c2e3ac(*(long *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (DAT_06db59d4 == '\0') {
              FUN_02d965b8(PTR_DAT_069fd9c8);
              DAT_06db59d4 = '\x01';
            }
            lVar5 = *(long *)puVar1;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c(lVar5);
              lVar5 = *(long *)puVar1;
            }
            lVar8 = *(long *)puVar3;
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar8 = *(long *)puVar3;
            }
            puVar15 = *(undefined8 **)(lVar8 + 0xb8);
            lVar12 = puVar15[1];
            if (lVar12 == 0) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                puVar15 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
              }
              uVar13 = *puVar15;
              lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>__ctor__
                                         );
              FUN_03b804ec(lVar12,uVar13,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                           ,0);
              plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
              *plVar7 = lVar12;
              LeanTween__value(plVar7,lVar12);
              lVar8 = *(long *)puVar3;
            }
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar8 = *(long *)puVar3;
            }
            puVar15 = *(undefined8 **)(lVar8 + 0xb8);
            lVar14 = puVar15[2];
            if (lVar14 == 0) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                puVar15 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
              }
              uVar13 = *puVar15;
              lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_Add__
                                         );
              FUN_04be213c(lVar14,uVar13,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_Add__
                           ,0);
              plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
              *plVar7 = lVar14;
              LeanTween__value(plVar7,lVar14);
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar5 = FUN_03843420(lVar5,lVar12,lVar14,uVar10,*(undefined8 *)(lVar16 + 0x28),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                                );
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            auVar18 = FUN_0555c350(lVar5,0,0);
            local_70 = auVar18;
            uVar9 = FUN_05410178(local_70,0);
            if ((uVar9 & 1) == 0) {
              *param_1 = 0;
              *(undefined1 (*) [16])(param_1 + 0x14) = local_70;
              LeanTween__value(param_1 + 0x14,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_0353b1b4(param_1 + 2,local_70,param_1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TryGetValue__
                          );
              return;
            }
          }
          FUN_05410190(local_70,0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(long *)(lVar16 + 0x28) != 0) {
            piVar6 = param_1 + 0xe;
            piVar6[0] = 0;
            piVar6[1] = 0;
            *param_1 = -2;
            LeanTween__value(piVar6,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05410914(param_1 + 2,0);
            return;
          }
        }
        uVar11 = param_1[0x12] + 1;
        param_1[0x12] = uVar11;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  if (*(long *)(lVar16 + 0x48) != 0) {
    uVar4 = 0xf;
    if (*(char *)(*(long *)(lVar16 + 0x48) + 0x30) == '\0') {
      uVar4 = 1;
    }
    uVar10 = FUN_05c286f4(uVar4,0);
    uVar13 = thunk_FUN_02dfd288(
                               Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TryGetValue__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar10,uVar13);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


