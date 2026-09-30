/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_tts_injection_started_t$$Dispose
ENTRY_POINT: 05febc00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_tts_injection_started_t__Dispose(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
  ;
  uVar2 = FUN_05f46908(param_1,0);
  uVar3 = FUN_02d966a4(*(undefined8 *)puVar1,uVar2);
  puVar9 = (undefined8 *)(unaff_x19 + 0x78);
  *puVar9 = uVar3;
  LeanTween__value(puVar9,uVar3);
  plVar10 = (long *)*puVar9;
  if (plVar10 == (long *)0x0) {
LAB_05febe94:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = *(long *)(unaff_x19 + 0x68);
  if ((lVar11 != 0) &&
     (lVar4 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar4 == 0)) {
LAB_05febe9c:
    uVar3 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3,0);
  }
  if ((int)plVar10[3] == 0) {
LAB_05febe98:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  plVar10[4] = lVar11;
  LeanTween__value(plVar10 + 4,lVar11);
  puVar1 = PTR_DAT_069fc498;
  if (1 < (int)uVar2) {
    lVar11 = 0;
    lVar4 = 0x28;
    do {
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_05febe94;
      uVar3 = FUN_0634bbcc(*(long *)(unaff_x19 + 0x68),0);
      uVar5 = FUN_0634bb04();
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
      }
      lVar6 = FUN_0376b380(uVar3,uVar5,*(undefined8 *)PTR_DAT_069fc4d0);
      if ((lVar6 == 0) ||
         (plVar10 = (long *)FUN_0364c220(lVar6,*(undefined8 *)PTR_DAT_06a09538),
         plVar10 == (long *)0x0)) goto LAB_05febe94;
      (**(code **)(*plVar10 + 0x2f8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x300));
      plVar10 = (long *)FUN_0634ee08(lVar6,0);
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05febe94;
      plVar7 = (long *)FUN_0634bb04(*(long *)(unaff_x19 + 0x60),0);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else if (*plVar7 != *(long *)PTR_DAT_069fc028) {
        plVar7 = (long *)0x0;
      }
      if ((plVar10 == (long *)0x0) || (*plVar10 != *(long *)PTR_DAT_069fc028)) goto LAB_05febe94;
      FUN_0635c84c(0,0x3f800000,plVar10,0);
      FUN_0635c9d0(0,0x3f800000,plVar10,0);
      FUN_0635ccd8(0x42c80000,0x41d00000,plVar10,0);
      if (plVar7 == (long *)0x0) goto LAB_05febe94;
      fVar12 = (float)FUN_0635ca90(plVar7,0);
      FUN_0635cb54((230.0 / (float)(int)uVar2) * (float)((int)lVar11 + 2) + 200.0 + fVar12,plVar10,0
                  );
      FUN_0635ce5c(0,0x3f800000,plVar10,0);
      plVar10 = (long *)*puVar9;
      lVar6 = FUN_0364c2b0(lVar6,*(undefined8 *)puVar1);
      if (plVar10 == (long *)0x0) goto LAB_05febe94;
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
      goto LAB_05febe9c;
      if ((ulong)*(uint *)(plVar10 + 3) <= lVar11 + 1U) goto LAB_05febe98;
      *(long *)((long)plVar10 + lVar4) = lVar6;
      LeanTween__value((long)plVar10 + lVar4,lVar6);
      lVar11 = lVar11 + 1;
      lVar4 = lVar4 + 8;
    } while ((ulong)uVar2 - 1 != lVar11);
  }
  return;
}


