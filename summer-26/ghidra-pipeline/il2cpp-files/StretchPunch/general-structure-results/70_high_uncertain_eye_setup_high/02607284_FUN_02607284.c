/*
FUNCTION_NAME: FUN_02607284
ENTRY_POINT: 02607284
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


void FUN_02607284(long param_1,long param_2,uint param_3,long param_4)

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
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_044a3ac6 & 1) == 0) {
    FUN_01d7d918(StringLiteral_887);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a3ac6 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  if ((int)param_3 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc(param_2,0);
  iVar2 = UnityEngine_TextCore_Text_TextProcessingStack<float>__Clear
                    (param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar1 - param_3) < iVar2) {
    FUN_033b2d60(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  lVar5 = thunk_FUN_01de26bc(param_2,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_01dfff04(param_2,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
      }
      plVar4 = (long *)FUN_033a87c8(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x288))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x290));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_026076b4;
          uVar8 = (**(code **)(*plVar4 + 0x288))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x290));
          if ((uVar8 & 1) == 0) {
            FUN_033b3618(0);
          }
        }
        plVar10 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
        if (plVar10 == (long *)0x0) {
          FUN_033b3618();
        }
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01dde7f8(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_02607560;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,lVar5,0);
LAB_02607560:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              lVar5 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_01dde7f8(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_026075ec;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,lVar5,0);
LAB_026075ec:
              (*(code *)*puVar3)(&local_a0,plVar4,iVar2,puVar3[1]);
              uStack_68 = uStack_98;
              local_70 = local_a0;
              uStack_58 = uStack_88;
              uStack_60 = uStack_90;
              uStack_48 = uStack_78;
              local_50 = local_80;
              lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                          (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28),
                                         &local_a0);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                FUN_01d7da3c(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db78();
              }
              plVar10[(long)(int)param_3 + 4] = lVar5;
              thunk_FUN_01e10808(plVar10 + (long)(int)param_3 + 4,lVar5);
              iVar2 = iVar2 + 1;
              param_3 = param_3 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_0260752c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(plVar10,lVar6,5);
LAB_0260752c:
                    /* WARNING: Could not recover jumptable at 0x02607550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,param_3,puVar3[1]);
      return;
    }
  }
LAB_026076b4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


