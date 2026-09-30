/*
FUNCTION_NAME: Unity.Services.Relay.WrappedRelayService$$JoinAllocationAsync
ENTRY_POINT: 05f46d60
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Relay_WrappedRelayService__JoinAllocationAsync(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *unaff_x19;
  long unaff_x20;
  long *plVar14;
  ulong uVar15;
  long *unaff_x23;
  long lVar16;
  undefined8 in_stack_00000008;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x9d8));
  FUN_02d965b8(
              Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRPlaneSubsystem,_XRPlaneSubsystem_Provider>__ctor__
              );
  FUN_02d965b8(
              Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRPointCloudSubsystem,_XRPointCloudSubsystem_Provider>__ctor__
              );
  FUN_02d965b8(
              Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRRaycastSubsystem,_XRRaycastSubsystem_Provider>__ctor__
              );
  FUN_02d965b8(
              Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRSessionSubsystem,_XRSessionSubsystem_Provider>__ctor__
              );
  *(undefined1 *)(unaff_x20 + 0x311) = 1;
  puVar1 = PTR_DAT_069fb9d8;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_063467cc(0);
  *(undefined4 *)(unaff_x19 + 0xd) = uVar5;
  uVar5 = FUN_05f46c60();
  lVar7 = FUN_02d966a4(*(undefined8 *)puVar1,uVar5);
  plVar14 = unaff_x19 + 0xc;
  *plVar14 = lVar7;
  LeanTween__value(plVar14,lVar7);
  iVar6 = FUN_05f46c60();
  puVar3 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRSessionSubsystem,_XRSessionSubsystem_Provider>__ctor__
  ;
  puVar1 = PTR_DAT_069fb9c0;
  if (0 < iVar6) {
    uVar15 = 0;
    lVar7 = 0x20;
    do {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar8 = FUN_06346684(uVar15 & 0xffffffff,0);
      uVar9 = FUN_0536c9cc(uVar8,0);
      if ((uVar9 & 1) != 0) {
        in_stack_00000008._4_4_ = (undefined4)uVar15;
        uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000008 + 4);
        uVar8 = FUN_0536388c(*(undefined8 *)puVar3,uVar8,0);
      }
      lVar11 = *plVar14;
      if (lVar11 == 0) goto LAB_05f47088;
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_05f470bc;
      *(undefined8 *)(lVar11 + uVar15 * 8 + 0x20) = uVar8;
      LeanTween__value(lVar11 + lVar7,uVar8);
      uVar15 = uVar15 + 1;
      iVar6 = FUN_05f46c60();
      lVar7 = lVar7 + 8;
    } while ((long)uVar15 < (long)iVar6);
  }
  puVar3 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XROcclusionSubsystem,_XROcclusionSubsystem_Provider>__ctor__
  ;
  puVar1 = PTR_DAT_06a11668;
  if (unaff_x19[0xe] != 0) {
    FUN_04419a08(unaff_x19[0xe],
                 *(undefined8 *)
                  Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRImageTrackingSubsystem,_XRImageTrackingSubsystem_Provider>__ctor__
                );
    plVar10 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_05f3e4c0();
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (plVar10 != (long *)0x0) {
      plVar12 = *(long **)(*(long *)puVar3 + 0xb8);
      lVar7 = plVar12[1];
      plVar10[5] = *plVar12;
      LeanTween__value();
      plVar10[6] = lVar7;
      LeanTween__value(plVar10 + 6,lVar7);
      *(undefined4 *)(plVar10 + 4) = 2;
      (**(code **)(*plVar10 + 0x1a8))(plVar10);
      if (unaff_x19[0xe] != 0) {
        FUN_044193fc(unaff_x19[0xe],plVar10,*(undefined8 *)PTR_DAT_06a11688);
        puVar4 = 
        Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRPointCloudSubsystem,_XRPointCloudSubsystem_Provider>__ctor__
        ;
        puVar3 = 
        Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRPlaneSubsystem,_XRPlaneSubsystem_Provider>__ctor__
        ;
        puVar1 = 
        Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleTranslate,_Translate>__ctor__;
        lVar7 = *plVar14;
        if (lVar7 != 0) {
          iVar6 = 0;
          do {
            if (*(int *)(lVar7 + 0x18) <= iVar6) {
              (**(code **)(*unaff_x19 + 0x1e8))();
              return;
            }
            lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRRaycastSubsystem,_XRRaycastSubsystem_Provider>__ctor__
                                      );
            FUN_0552aca4(lVar7,0);
            if (lVar7 == 0) break;
            *(undefined8 *)(lVar7 + 0x18) = unaff_x19;
            LeanTween__value((undefined8 *)(lVar7 + 0x18));
            puVar2 = 
            Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRAnchorSubsystem,_XRAnchorSubsystem_Provider>__ctor__
            ;
            lVar16 = plVar10[9];
            *(int *)(lVar7 + 0x10) = iVar6;
            lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
            FUN_05f470c8();
            lVar13 = unaff_x19[0xc];
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(lVar7 + 0x10)) {
LAB_05f470bc:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            if (lVar11 == 0) break;
            *(undefined8 *)(lVar11 + 0x28) =
                 *(undefined8 *)(lVar13 + (long)(int)*(uint *)(lVar7 + 0x10) * 8 + 0x20);
            LeanTween__value();
            uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRFaceSubsystem,_XRFaceSubsystem_Provider>__ctor__
                                      );
            FUN_03b6f394(uVar8,lVar7,*(undefined8 *)puVar3,0);
            *(undefined8 *)(lVar11 + 0x48) = uVar8;
            LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar8);
            uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            FUN_04bdc5bc(uVar8,lVar7,*(undefined8 *)puVar4,0);
            *(undefined8 *)(lVar11 + 0x50) = uVar8;
            LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar8);
            if (lVar16 == 0) break;
            FUN_044193fc(lVar16,lVar11,*(undefined8 *)PTR_DAT_06a11688);
            lVar7 = *plVar14;
            iVar6 = iVar6 + 1;
          } while (lVar7 != 0);
        }
      }
    }
  }
LAB_05f47088:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


