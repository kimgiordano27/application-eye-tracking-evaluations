/*
FUNCTION_NAME: FUN_025e38cc
ENTRY_POINT: 025e38cc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_025e38cc(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_044a3a51 & 1) == 0) {
    FUN_01d7d918(StringLiteral_887);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a3a51 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar2 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar2 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar2 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar2 != 0) {
    FUN_033b2d60(6,0);
  }
  if ((int)param_3 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar2 = FUN_033aadfc(param_2,0);
  iVar3 = FUN_025e3148(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar2 - param_3) < iVar3) {
    FUN_033b2d60(5,0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01dde7f8(lVar6);
  }
  lVar6 = thunk_FUN_01de26bc(param_2,lVar6);
  if (lVar6 == 0) {
    plVar11 = (long *)thunk_FUN_01dfff04(param_2,0);
    if (plVar11 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x418))(plVar11,*(undefined8 *)(*plVar11 + 0x420));
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
      }
      plVar5 = (long *)FUN_033a87c8(uVar12,0);
      if (plVar11 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar11 + 0x288))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x290));
        if ((uVar9 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_025e3d10;
          uVar9 = (**(code **)(*plVar5 + 0x288))(plVar5,plVar11,*(undefined8 *)(*plVar5 + 0x290));
          if ((uVar9 & 1) == 0) {
            FUN_033b3618(0);
          }
        }
        plVar11 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
        if (plVar11 == (long *)0x0) {
          FUN_033b3618();
        }
        plVar5 = *(long **)(param_1 + 0x10);
        if (plVar5 != (long *)0x0) {
          lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01dde7f8(lVar6);
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_025e3ba8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,lVar6,0);
LAB_025e3ba8:
          iVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (0 < iVar2) {
            iVar3 = 0;
            do {
              plVar5 = *(long **)(param_1 + 0x10);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              lVar6 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01dde7f8(lVar6);
              }
              lVar7 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar6) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_025e3c34;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,lVar6,0);
LAB_025e3c34:
              (*(code *)*puVar4)(&local_90,plVar5,iVar3,puVar4[1]);
              uStack_68 = uStack_88;
              local_70 = local_90;
              local_60 = local_80;
              lVar6 = thunk_FUN_01de23e8(*(undefined8 *)
                                          (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28),
                                         &local_90);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
                uVar12 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                FUN_01d7da3c(uVar12,0);
              }
              if (*(uint *)(plVar11 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db78();
              }
              plVar11[(long)(int)param_3 + 4] = lVar6;
              thunk_FUN_01e10808(plVar11 + (long)(int)param_3 + 4,lVar6);
              iVar3 = iVar3 + 1;
              param_3 = param_3 + 1;
            } while (iVar3 != iVar2);
          }
          goto LAB_025e3cc0;
        }
      }
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8(lVar7);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_025e3b84;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar11,lVar7,5);
LAB_025e3b84:
      (*(code *)*puVar4)(plVar11,lVar6,param_3,puVar4[1]);
LAB_025e3cc0:
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_025e3d10:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


