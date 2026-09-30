/*
FUNCTION_NAME: FUN_027bba14
ENTRY_POINT: 027bba14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_027bba14(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long local_80;
  undefined1 local_78 [16];
  int local_68;
  int iStack_64;
  
  if ((DAT_03788833 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsub_u8__);
    thunk_FUN_00d48444(UnityEngine_ProBuilder_Shapes_Cone_TypeInfo);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<int>_AddRange__);
    thunk_FUN_00d48444(UnityEngine_XR_InputDevice_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XdrBuilder_XDR_InitAttribute__);
    DAT_03788833 = 1;
  }
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
  ;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_80 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar12 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)
           Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
         ) {
        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
        goto LAB_027bbaf8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_00d59724(param_2,*(long *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                         ,1);
LAB_027bbaf8:
  iVar5 = (*(code *)*puVar10)(param_2,puVar10[1]);
  lVar13 = *param_2;
  lVar12 = *(long *)puVar2;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar12) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
        goto LAB_027bbb58;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724(param_2,lVar12,2);
LAB_027bbb58:
  iVar6 = (*(code *)*puVar10)(param_2,puVar10[1]);
  lVar13 = *param_2;
  lVar12 = *(long *)puVar2;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar12) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
        goto LAB_027bbbb8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724(param_2,lVar12,4);
LAB_027bbbb8:
  puVar2 = UnityEngine_ProBuilder_Shapes_Cone_TypeInfo;
  iVar7 = (*(code *)*puVar10)(param_2,puVar10[1]);
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsub_u8__;
  if (iVar7 == 0) {
    bVar4 = true;
  }
  else if (iVar5 == -1) {
    bVar4 = iVar6 == -1;
  }
  else {
    bVar4 = false;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_78 = FUN_0125e85c(&local_80,*(undefined8 *)puVar3);
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
    iVar7 = 0;
    uVar15 = 0;
    uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
    do {
      if (uVar14 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(undefined4 *)(lVar12 + 0x20 + uVar15 * 4);
      plVar11 = (long *)FUN_0278c890(*(long *)(param_1 + 0x30),0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar8 = (**(code **)(*plVar11 + 0x248))(plVar11,uVar1,*(undefined8 *)(*plVar11 + 0x250));
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar13 = FUN_0278c890(*(long *)(param_1 + 0x30),0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar9 = FUN_028355ec(lVar13,uVar1,0);
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ce91cc(local_80,CONCAT44(iVar9,iVar8),
                   *(undefined8 *)Method_Obi_ObiNativeList<int>_AddRange__);
      if (bVar4) {
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar11 = (long *)FUN_0278c890(*(long *)(param_1 + 0x30),0);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar11 + 0x268))
                  (plVar11,uVar1,iVar5,0xffffffff,0,*(undefined8 *)(*plVar11 + 0x270));
      }
      else {
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar11 = (long *)FUN_0278c890(*(long *)(param_1 + 0x30),0);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar11 + 0x268))
                  (plVar11,uVar1,iVar5,iVar7 + iVar6,0,*(undefined8 *)(*plVar11 + 0x270));
        iVar7 = iVar7 + (uint)(iVar8 != iVar5 || iVar6 <= iVar9);
      }
      uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((long)uVar15 < (long)(int)*(uint *)(lVar12 + 0x18));
  }
  lVar12 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)
           Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
         ) {
        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar16 + 4) * 0x10 + 0x138);
        goto LAB_027bbdb8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_00d59724(param_2,*(long *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                         ,4);
LAB_027bbdb8:
  iVar6 = (*(code *)*puVar10)(param_2,puVar10[1]);
  if (iVar6 == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar12 = FUN_0278c890(*(long *)(param_1 + 0x30),0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_02836ca4(lVar12,iVar5,0,0,0);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar12 = FUN_0278c890(*(long *)(param_1 + 0x30),0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_02834e60(lVar12,0);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_027ed6c8(*(long *)(param_1 + 0x30),0);
  puVar2 = UnityEngine_XR_InputDevice_TypeInfo;
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != 0) {
    uVar15 = 0;
    do {
      lVar12 = *(long *)(lVar12 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar15) {
        FUN_0136ab90(local_78,*(undefined8 *)Method_System_Xml_Schema_XdrBuilder_XDR_InitAttribute__
                    );
        return;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(undefined4 *)(lVar12 + uVar15 * 4 + 0x20);
      FUN_0132138c(local_80,uVar15 & 0xffffffff,&local_68,*(undefined8 *)puVar2);
      iVar7 = iStack_64;
      iVar6 = local_68;
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar11 = (long *)FUN_0278c890(*(long *)(param_1 + 0x30),0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar8 = (**(code **)(*plVar11 + 0x248))(plVar11,uVar1,*(undefined8 *)(*plVar11 + 0x250));
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = FUN_0278c890(*(long *)(param_1 + 0x30),0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar9 = FUN_028355ec(lVar12,uVar1,0);
      if ((iVar8 != iVar6) || (iVar9 != iVar7)) {
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = FUN_0278c890(*(long *)(param_1 + 0x30),0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02836e38(lVar12,uVar1,iVar5,0);
      }
      lVar12 = *(long *)(param_1 + 0x28);
      uVar15 = uVar15 + 1;
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


