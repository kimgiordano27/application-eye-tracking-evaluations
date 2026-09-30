/*
FUNCTION_NAME: FUN_05584274
ENTRY_POINT: 05584274
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05584684) */

void FUN_05584274(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  
  if ((DAT_06bbf9dc & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbf9dc = 1;
  }
  uVar8 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x7a) == '\0') {
    return;
  }
  lVar9 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x188) != 0)) {
    if (*(long *)(*(long *)(lVar9 + 0x188) + 0x18) == 0) {
      return;
    }
    lVar9 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    if (lVar9 != 0) {
      if ((*(int *)(lVar9 + 0x18) == 1) &&
         (uVar8 = FUN_05585338(param_1,*(undefined8 *)(lVar9 + 0x20)), (uVar8 & 1) != 0)) {
        uVar8 = FUN_055d9fe4(param_1,0);
        lVar9 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        if ((uVar8 & 1) != 0) {
          if ((lVar9 != 0) && (plVar10 = *(long **)(lVar9 + 0x48), plVar10 != (long *)0x0)) {
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            puVar7 = 
            UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
            ;
            puVar6 = 
            UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
            puVar5 = 
            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            puVar4 = PTR_DAT_067c91b8;
            do {
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar15 = *plVar10;
              lVar9 = *(long *)puVar4;
              uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar8 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar9) {
                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0558441c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar9,0);
LAB_0558441c:
              uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              puVar3 = PTR_DAT_067c91b0;
              if ((uVar8 & 1) == 0) {
                plVar10 = (long *)thunk_FUN_02f45174(plVar10,*(undefined8 *)PTR_DAT_067c91b0);
                if (plVar10 == (long *)0x0) {
                  return;
                }
                lVar9 = *plVar10;
                uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar8 == 0) goto LAB_0558459c;
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_05584584;
              }
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar15 = *plVar10;
              lVar9 = *(long *)puVar4;
              uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar8 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar9) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_05584484;
                  }
                  uVar8 = uVar8 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar9,1);
LAB_05584484:
              plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar12 == (long *)0x0) {
LAB_05584500:
                uVar8 = FUN_055d0e44(plVar12,0);
                if ((uVar8 & 1) == 0) {
                  lVar9 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
                  if (lVar9 != 0) {
                    uVar13 = FUN_05565e58(*(undefined8 *)(lVar9 + 0x90),0);
                    uVar14 = thunk_FUN_02f6ef30(
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ReadFromFinishedAsync>d__5>__
                                               );
                    /* WARNING: Subroutine does not return */
                    FUN_02f0888c(uVar13,uVar14);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
              else {
                bVar1 = *(byte *)(*plVar12 + 0x130);
                bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                if ((bVar1 < bVar2) ||
                   (lVar9 = *(long *)(*plVar12 + 200),
                   *(long *)(lVar9 + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48();
                }
                bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
                if ((bVar1 < bVar2) || (*(long *)(lVar9 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)
                   ) {
                  bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                  if ((bVar1 < bVar2) ||
                     (*(long *)(lVar9 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08d48();
                  }
                  goto LAB_05584500;
                }
                uVar8 = FUN_055da0c8(plVar12,1,0);
                if ((uVar8 & 1) == 0) {
                  lVar9 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
                  if (lVar9 != 0) {
                    uVar13 = FUN_05565e58(*(undefined8 *)(lVar9 + 0x90),0);
                    uVar14 = thunk_FUN_02f6ef30(
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ReadFromFinishedAsync>d__5>__
                                               );
                    /* WARNING: Subroutine does not return */
                    FUN_02f0888c(uVar13,uVar14);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
            } while( true );
          }
          goto LAB_05584630;
        }
        FUN_02a7da48(lVar9);
        uVar13 = *(undefined8 *)(lVar9 + 0x90);
      }
      else {
        lVar9 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        FUN_02a7da48();
        uVar13 = *(undefined8 *)(lVar9 + 0x90);
      }
      uVar13 = FUN_05565e58(uVar13,0);
      uVar14 = thunk_FUN_02f6ef30(
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ReadFromFinishedAsync>d__5>__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar13,uVar14);
    }
  }
LAB_05584630:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
LAB_05584584:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_055845b8;
    }
  }
LAB_0558459c:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_055845b8:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


