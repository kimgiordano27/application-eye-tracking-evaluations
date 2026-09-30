/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$RegisterControl
ENTRY_POINT: 0144319c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Console__RegisterControl(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined4 uStack000000000000002c;
  
  if ((DAT_03776a2d & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_1982);
    thunk_FUN_00d48444(StringLiteral_4842);
    thunk_FUN_00d48444(StringLiteral_11854);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Material>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033ed380);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Array_FindLast<__Il2CppFullySharedGenericType>__);
    thunk_FUN_00d48444(TMPro_TMP_SubMesh_var);
    thunk_FUN_00d48444(StringLiteral_9252);
    thunk_FUN_00d48444(StringLiteral_968);
    DAT_03776a2d = 1;
  }
  puVar4 = PTR_DAT_033ed380;
  uStack000000000000002c = 0;
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar12 != 0) {
      if (3 < *(int *)(lVar12 + 0x10)) {
        plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
        puVar4 = Method_System_Array_FindLast<__Il2CppFullySharedGenericType>__;
        if (plVar13 == (long *)0x0) break;
        if ((*(long *)Method_System_Array_FindLast<__Il2CppFullySharedGenericType>__ != 0) &&
           (lVar9 = thunk_FUN_00d6225c(*(long *)
                                        Method_System_Array_FindLast<__Il2CppFullySharedGenericType>__
                                       ,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)) {
LAB_01443840:
          uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar14,0);
        }
        if ((int)plVar13[3] == 0) goto LAB_0144383c;
        plVar13[4] = *(long *)puVar4;
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x70), lVar9 == 0)) break;
        uStack000000000000002c = *(undefined4 *)(lVar9 + 0x18);
        lVar9 = FUN_0176eb1c(&stack0x0000002c,0);
        if ((lVar9 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0))
        goto LAB_01443840;
        puVar4 = StringLiteral_968;
        uVar5 = *(uint *)(plVar13 + 3);
        if (uVar5 < 2) {
LAB_0144383c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar13[5] = lVar9;
        lVar9 = *(long *)puVar4;
        if (lVar9 != 0) {
          lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar9 == 0) goto LAB_01443840;
          uVar5 = *(uint *)(plVar13 + 3);
        }
        if (uVar5 < 3) goto LAB_0144383c;
        plVar13[6] = *(long *)puVar4;
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x60), lVar9 == 0)) break;
        uStack000000000000002c = *(undefined4 *)(lVar9 + 0x18);
        lVar9 = FUN_0176eb1c(&stack0x0000002c,0);
        if ((lVar9 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0))
        goto LAB_01443840;
        puVar4 = TMPro_TMP_SubMesh_var;
        uVar5 = *(uint *)(plVar13 + 3);
        if (uVar5 < 4) goto LAB_0144383c;
        plVar13[7] = lVar9;
        lVar9 = *(long *)puVar4;
        if (lVar9 != 0) {
          lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar9 == 0) goto LAB_01443840;
          uVar5 = *(uint *)(plVar13 + 3);
        }
        if (uVar5 < 5) goto LAB_0144383c;
        plVar13[8] = *(long *)puVar4;
        lVar9 = *(long *)(param_1 + 0x28);
        if (lVar9 == 0) break;
        if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar9 = FUN_016f5f58(lVar9 + 0x27,0);
        if ((lVar9 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0))
        goto LAB_01443840;
        puVar4 = StringLiteral_302;
        if (*(uint *)(plVar13 + 3) < 6) goto LAB_0144383c;
        plVar13[9] = lVar9;
        uVar14 = FUN_01600844(plVar13,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        FUN_02660dac(uVar14,0);
      }
      puVar4 = Method_System_Collections_Generic_List<Material>_Add__;
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x18))
                  (DAT_028aa028,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)StringLiteral_9252,
                   *(undefined8 *)(lVar9 + 0x28));
      }
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar4 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__;
      if (lVar9 != 0) {
        FUN_0145a258(lVar9,0);
        *(long *)(param_1 + 0x50) = lVar9;
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar9 != 0) {
          FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_1982);
          plVar13 = *(long **)(param_1 + 0x50);
          if (plVar13 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar13 + 0x178))
                               (plVar13,*(undefined8 *)(param_1 + 0x30),
                                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
                                lVar12,*(undefined8 *)(param_1 + 0x40),lVar9,
                                *(undefined4 *)(lVar12 + 0x10));
            *(undefined8 *)(param_1 + 0x18) = uVar14;
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
        }
      }
    }
    break;
  case 1:
    lVar9 = *(long *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x10) == '\0') {
        return 0;
      }
      if ((lVar12 != 0) && (plVar13 = *(long **)(param_1 + 0x50), plVar13 != (long *)0x0)) {
        uVar14 = (**(code **)(*plVar13 + 0x188))
                           (plVar13,*(undefined8 *)(param_1 + 0x30),lVar9,
                            *(undefined8 *)(param_1 + 0x28),lVar12,*(undefined8 *)(param_1 + 0x40),
                            *(undefined4 *)(lVar12 + 0x10),*(undefined8 *)(*plVar13 + 400));
        *(undefined8 *)(param_1 + 0x18) = uVar14;
        uVar8 = 2;
LAB_01443814:
        *(undefined4 *)(param_1 + 0x10) = uVar8;
        return 1;
      }
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x38) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) == '\0') {
        return 0;
      }
      plVar13 = *(long **)(param_1 + 0x50);
      if (plVar13 != (long *)0x0) {
        uVar14 = (**(code **)(*plVar13 + 0x1c8))
                           (plVar13,*(undefined8 *)(param_1 + 0x28),
                            *(undefined8 *)(*plVar13 + 0x1d0));
        *(undefined8 *)(param_1 + 0x58) = uVar14;
        if (*(long *)(param_1 + 0x28) != 0) {
          plVar13 = *(long **)(param_1 + 0x50);
          uVar5 = FUN_0145b018(*(long *)(param_1 + 0x28),0);
          if ((*(long *)(param_1 + 0x28) != 0) && (plVar13 != (long *)0x0)) {
            plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                        (plVar13,uVar5 & 1,
                                         *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x30),
                                         *(undefined8 *)(*plVar13 + 0x1b0));
            *(long **)(param_1 + 0x60) = plVar13;
            if (plVar13 != (long *)0x0) {
              lVar9 = *plVar13;
              uVar14 = *(undefined8 *)(param_1 + 0x28);
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                    puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_01443758;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar4,0);
LAB_01443758:
              uVar10 = (*(code *)*puVar7)(plVar13,uVar14,puVar7[1]);
              if ((uVar10 & 1) == 0) {
                if (*(long *)(param_1 + 0x38) != 0) {
                  *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x10) = 0;
                  return 0;
                }
              }
              else if ((lVar12 != 0) &&
                      (plVar13 = *(long **)(param_1 + 0x60), plVar13 != (long *)0x0)) {
                lVar9 = *plVar13;
                uVar14 = *(undefined8 *)(param_1 + 0x28);
                uVar2 = *(undefined8 *)(param_1 + 0x30);
                uVar1 = *(undefined8 *)(param_1 + 0x38);
                uVar3 = *(undefined8 *)(param_1 + 0x40);
                uVar8 = *(undefined4 *)(lVar12 + 0x10);
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                      puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_014437e8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar7 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar4,1);
LAB_014437e8:
                uVar14 = (*(code *)*puVar7)(plVar13,uVar2,uVar1,uVar14,lVar12,uVar3,uVar8,puVar7[1])
                ;
                uVar8 = 3;
                *(undefined8 *)(param_1 + 0x18) = uVar14;
                goto LAB_01443814;
              }
            }
          }
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x38) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) == '\0') {
        return 0;
      }
      if ((lVar12 != 0) && (plVar13 = *(long **)(param_1 + 0x60), plVar13 != (long *)0x0)) {
        lVar9 = *plVar13;
        uVar14 = *(undefined8 *)(param_1 + 0x28);
        uVar8 = *(undefined4 *)(lVar12 + 0x10);
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_014436dc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar4,2);
LAB_014436dc:
        lVar9 = (*(code *)*puVar7)(plVar13,uVar14,0,uVar8,puVar7[1]);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0144383c;
          plVar13 = *(long **)(param_1 + 0x50);
          if (plVar13 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined8 *)(param_1 + 0x38),
                                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
                                lVar12,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(lVar9 + 0x20)
                                ,*(undefined8 *)(param_1 + 0x40));
            *(undefined8 *)(param_1 + 0x18) = uVar14;
            uVar8 = 4;
            goto LAB_01443814;
          }
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


