/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils.RegisterMember<__Il2CppFullySharedGenericType>$$BeginInvoke
ENTRY_POINT: 05937264
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<__Il2CppFullySharedGenericType>__BeginInvoke
               (long param_1,long param_2,long param_3,uint param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x26;
  long lStack00000000000000b8;
  
  lStack00000000000000b8 = param_1;
  if ((DAT_09413d62 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69878);
    FUN_03c8f898(PTR_DAT_08e695f0);
    DAT_09413d62 = 1;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07112c04(3,0);
  }
  iVar1 = thunk_FUN_03d12034(param_3,0);
  if (iVar1 != 1) {
    FUN_07122470(7,0);
  }
  iVar1 = thunk_FUN_03d11ff0(param_3,0,0);
  if (iVar1 != 0) {
    FUN_07122470(6,0);
  }
  if ((int)param_4 < 0) {
    FUN_07122cf0(0);
  }
  iVar1 = FUN_07119d8c(param_3,0);
  iVar2 = FUN_05936aa0(param_2,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar1 - param_4) < iVar2) {
    FUN_07122470(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244(lVar5);
  }
  lVar5 = thunk_FUN_03cf5138(param_3,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_03d12a58(param_3,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x458))(plVar10,*(undefined8 *)(*plVar10 + 0x460));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
      }
      plVar4 = (long *)FUN_0710fcf0(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x2c8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2d0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_05937690;
          uVar8 = (**(code **)(*plVar4 + 0x2c8))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2d0));
          if ((uVar8 & 1) == 0) {
            FUN_07122d28(0);
          }
        }
        plVar10 = (long *)thunk_FUN_03cf5138(param_3,*(undefined8 *)PTR_DAT_08e69878);
        if (plVar10 == (long *)0x0) {
          FUN_07122d28();
        }
        plVar4 = *(long **)(param_2 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03cf1244(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05937520;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03cf1348(plVar4,lVar5,0);
LAB_05937520:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_2 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar5 = **(long **)(*(long *)(param_5 + 0x20) + 0xc0);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_03cf1244(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_059375ac;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_03cf1348(plVar4,lVar5,0);
LAB_059375ac:
              (*(code *)*puVar3)(&stack0x00000008,plVar4,iVar2,puVar3[1]);
              memcpy(&stack0x00000060,&stack0x00000008,0x58);
              memcpy(&stack0x00000008,&stack0x00000060,0x58);
              lVar5 = thunk_FUN_03cf4e64(*(undefined8 *)
                                          (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28),
                                         &stack0x00000008);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
                FUN_03c8f9fc(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_4) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              plVar10[(long)(int)param_4 + 4] = lVar5;
              thunk_FUN_03d233cc(plVar10 + (long)(int)param_4 + 4,lVar5);
              iVar2 = iVar2 + 1;
              param_4 = param_4 + 1;
            } while (iVar2 != iVar1);
          }
          goto LAB_05937640;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(param_2 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_059374fc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar10,lVar6,5);
LAB_059374fc:
      (*(code *)*puVar3)(plVar10,lVar5,param_4,puVar3[1]);
LAB_05937640:
      if (*(long *)(unaff_x26 + 0x28) == lStack00000000000000b8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_05937690:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


