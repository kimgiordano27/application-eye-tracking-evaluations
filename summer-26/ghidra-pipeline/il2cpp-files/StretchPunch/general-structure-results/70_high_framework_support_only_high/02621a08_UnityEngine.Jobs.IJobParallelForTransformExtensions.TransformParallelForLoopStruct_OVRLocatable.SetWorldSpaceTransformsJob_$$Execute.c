/*
FUNCTION_NAME: UnityEngine.Jobs.IJobParallelForTransformExtensions.TransformParallelForLoopStruct<OVRLocatable.SetWorldSpaceTransformsJob>$$Execute
ENTRY_POINT: 02621a08
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct<OVRLocatable_SetWorldSpaceTransformsJob>__Execute
               (void)

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
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined8 uVar11;
  
  FUN_033b2d60();
  iVar1 = thunk_FUN_01dff49c();
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  if ((int)unaff_w19 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc();
  iVar2 = FUN_02621358();
  if ((int)(iVar1 - unaff_w19) < iVar2) {
    FUN_033b2d60(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar5);
  }
  lVar5 = thunk_FUN_01de26bc();
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_01dfff04();
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
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
          if (plVar4 == (long *)0x0) goto LAB_02621db0;
          uVar8 = (**(code **)(*plVar4 + 0x288))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x290));
          if ((uVar8 & 1) == 0) {
            FUN_033b3618(0);
          }
        }
        plVar10 = (long *)thunk_FUN_01de26bc();
        if (plVar10 == (long *)0x0) {
          FUN_033b3618();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
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
                goto LAB_02621c74;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,lVar5,0);
LAB_02621c74:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
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
                    goto LAB_02621d00;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,lVar5,0);
LAB_02621d00:
              (*(code *)*puVar3)(plVar4,iVar2,puVar3[1]);
              lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
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
              if (*(uint *)(plVar10 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db78();
              }
              plVar10[(long)(int)unaff_w19 + 4] = lVar5;
              thunk_FUN_01e10808(plVar10 + (long)(int)unaff_w19 + 4,lVar5);
              iVar2 = iVar2 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(unaff_x21 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
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
            goto LAB_02621c40;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(plVar10,lVar6,5);
LAB_02621c40:
                    /* WARNING: Could not recover jumptable at 0x02621c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_02621db0:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


