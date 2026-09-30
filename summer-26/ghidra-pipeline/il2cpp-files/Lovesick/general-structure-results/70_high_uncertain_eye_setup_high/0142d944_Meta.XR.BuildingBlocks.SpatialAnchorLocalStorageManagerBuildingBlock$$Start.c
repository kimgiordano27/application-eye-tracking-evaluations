/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$Start
ENTRY_POINT: 0142d944
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__Start
               (ulong param_1,long *param_2,long param_3,undefined8 param_4,byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  undefined4 in_stack_00000008;
  byte bStack000000000000000c;
  
  bStack000000000000000c = param_5 & 1;
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HashSet<Face>>_Add__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eec90);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<ShapeRecognizer>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0e50);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<ScrollRect>__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_ReticleGhostDrawer_<Start>b__18_0__
                      );
    *(undefined1 *)(unaff_x22 + 0x9c6) = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__ctor__
  ;
  puVar1 = Method_System_Collections_Generic_List<HashSet<Face>>_Add__;
  in_stack_00000008 = 0;
  if ((int)param_2[2] == 0) {
    if (unaff_x21 == 0) {
      lVar5 = *(long *)Method_System_Collections_Generic_List<HashSet<Face>>_Add__;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      unaff_x21 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    }
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (((param_3 != 0) && (*(char *)((long)param_2 + 0x8c) != '\0')) &&
       (*(long *)(param_3 + 0x18) != 0)) {
      FUN_0142deac(param_2[4]);
      param_2[4] = 0;
      *(undefined1 *)((long)param_2 + 0x8c) = 0;
    }
    lVar5 = param_2[4];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0268b4e0(lVar5,0,0);
    if (((param_3 != 0) && ((uVar6 & 1) != 0)) && (*(long *)(param_3 + 0x18) != 0)) {
      if ((int)*(long *)(param_3 + 0x18) == 0) goto LAB_0142de98;
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_02681b9c(uVar9,0,0);
      if ((uVar6 & 1) != 0) {
        uVar9 = (**(code **)(*param_2 + 0x958))(param_2,*(undefined8 *)(*param_2 + 0x960));
        uVar6 = (**(code **)(*param_2 + 0x948))
                          (param_2,param_3,uVar9,*(undefined8 *)(*param_2 + 0x950));
        if ((uVar6 & 1) == 0) goto LAB_0142dc34;
      }
    }
    uVar6 = FUN_0142df2c(param_2,param_3,unaff_x21);
    if ((uVar6 & 1) != 0) {
      FUN_0142e4d0(param_2,param_3,unaff_x21);
      iVar3 = (**(code **)(*param_2 + 0x4f8))(param_2,*(undefined8 *)(*param_2 + 0x500));
      if (3 < iVar3) {
        plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,10);
        puVar1 = PTR_DAT_033eec90;
        if (plVar7 == (long *)0x0) {
LAB_0142dea8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((*(long *)PTR_DAT_033eec90 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033eec90,*(undefined8 *)(*plVar7 + 0x40)),
           lVar5 == 0)) {
LAB_0142de9c:
          uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_0142de98;
        plVar7[4] = *(long *)puVar1;
        if (param_2[0x13] == 0) goto LAB_0142dea8;
        in_stack_00000008 = *(undefined4 *)(param_2[0x13] + 0x18);
        lVar5 = FUN_0176eb1c(&stack0x00000008,0);
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0142de9c;
        puVar1 = Method_UnityEngine_GameObject_AddComponent<ScrollRect>__;
        uVar4 = *(uint *)(plVar7 + 3);
        if (uVar4 < 2) {
LAB_0142de98:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar7[5] = lVar5;
        lVar5 = *(long *)puVar1;
        if (lVar5 != 0) {
          lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar5 == 0) goto LAB_0142de9c;
          uVar4 = *(uint *)(plVar7 + 3);
        }
        if (uVar4 < 3) goto LAB_0142de98;
        plVar7[6] = *(long *)puVar1;
        if (param_3 == 0) {
          in_stack_00000008 = 0;
        }
        else {
          in_stack_00000008 = *(undefined4 *)(param_3 + 0x18);
        }
        lVar5 = FUN_0176eb1c(&stack0x00000008,0);
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0142de9c;
        puVar1 = PTR_DAT_033f0e50;
        uVar4 = *(uint *)(plVar7 + 3);
        if (uVar4 < 4) goto LAB_0142de98;
        plVar7[7] = lVar5;
        lVar5 = *(long *)puVar1;
        if (lVar5 != 0) {
          lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar5 == 0) goto LAB_0142de9c;
          uVar4 = *(uint *)(plVar7 + 3);
        }
        if (uVar4 < 5) goto LAB_0142de98;
        plVar7[8] = *(long *)puVar1;
        if (unaff_x21 == 0) {
          in_stack_00000008 = 0;
        }
        else {
          in_stack_00000008 = *(undefined4 *)(unaff_x21 + 0x18);
        }
        lVar5 = FUN_0176eb1c(&stack0x00000008,0);
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0142de9c;
        puVar1 = Method_Oculus_Interaction_DistanceReticles_ReticleGhostDrawer_<Start>b__18_0__;
        uVar4 = *(uint *)(plVar7 + 3);
        if (uVar4 < 6) goto LAB_0142de98;
        plVar7[9] = lVar5;
        lVar5 = *(long *)puVar1;
        if (lVar5 != 0) {
          lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar5 == 0) goto LAB_0142de9c;
          uVar4 = *(uint *)(plVar7 + 3);
        }
        puVar2 = StringLiteral_9958;
        if (uVar4 < 7) goto LAB_0142de98;
        plVar7[10] = *(long *)puVar1;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar5 = FUN_016f5f58(&stack0x0000000c,0);
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0142de9c;
        puVar1 = System_Collections_Generic_IEnumerator<ShapeRecognizer>_TypeInfo;
        uVar4 = *(uint *)(plVar7 + 3);
        if (uVar4 < 8) goto LAB_0142de98;
        plVar7[0xb] = lVar5;
        lVar5 = *(long *)puVar1;
        if (lVar5 != 0) {
          lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar5 == 0) goto LAB_0142de9c;
          uVar4 = *(uint *)(plVar7 + 3);
        }
        if (uVar4 < 9) goto LAB_0142de98;
        plVar7[0xc] = *(long *)puVar1;
        lVar5 = FUN_0176eb1c(param_2 + 0x14,0);
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0142de9c;
        puVar1 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        if (*(uint *)(plVar7 + 3) < 10) goto LAB_0142de98;
        plVar7[0xd] = lVar5;
        uVar9 = FUN_01600844(plVar7,0);
        lVar8 = *(long *)puVar1;
        lVar5 = *(long *)(lVar8 + 0x38);
        if (lVar5 == 0) {
          FUN_00d59478(lVar8);
          lVar5 = *(long *)(lVar8 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        FUN_013f38b0(uVar9,**(undefined8 **)(lVar5 + 0xb8),0);
      }
      uVar4 = FUN_0142ed58(param_2,param_3);
      *(undefined4 *)(param_2 + 2) = 1;
      goto LAB_0142dc38;
    }
  }
  else {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar2,0);
  }
LAB_0142dc34:
  uVar4 = 0;
LAB_0142dc38:
  return uVar4 & 1;
}


