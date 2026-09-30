/*
FUNCTION_NAME: VolumetricAudio.Examples.VA_Wireframe$$get_Pairs
ENTRY_POINT: 027a8f1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 210
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_9;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x027a9878) */
/* WARNING: Removing unreachable block (ram,0x027a9508) */
/* WARNING: Removing unreachable block (ram,0x027a9518) */
/* WARNING: Removing unreachable block (ram,0x027a9880) */
/* WARNING: Removing unreachable block (ram,0x027a9738) */

void VolumetricAudio_Examples_VA_Wireframe__get_Pairs(void)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 unaff_s12;
  undefined4 uVar19;
  undefined4 unaff_s13;
  undefined4 uVar20;
  undefined4 unaff_s14;
  undefined4 uVar21;
  undefined4 unaff_s15;
  undefined4 uVar22;
  float fStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined1 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined1 *in_stack_00000088;
  undefined1 *in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined1 *in_stack_000000a0;
  undefined1 *in_stack_000000a8;
  undefined1 *in_stack_000000b0;
  undefined1 *in_stack_000000b8;
  undefined1 *in_stack_000000c0;
  undefined1 *in_stack_000000c8;
  undefined1 *in_stack_000000d0;
  undefined1 *in_stack_000000d8;
  undefined1 *in_stack_000000e0;
  undefined1 *in_stack_000000e8;
  undefined1 *in_stack_000000f0;
  undefined1 *in_stack_000000f8;
  undefined1 *in_stack_00000100;
  undefined1 *in_stack_00000108;
  undefined1 *in_stack_00000110;
  undefined1 *in_stack_00000118;
  undefined1 *in_stack_00000120;
  undefined1 *in_stack_00000128;
  undefined1 *in_stack_00000130;
  undefined1 *in_stack_00000138;
  undefined1 *in_stack_00000140;
  undefined1 *in_stack_00000148;
  undefined1 *in_stack_00000150;
  undefined1 *in_stack_00000158;
  undefined1 *in_stack_00000160;
  undefined1 *in_stack_00000168;
  undefined1 *in_stack_00000170;
  undefined8 in_stack_00000208;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__;
  plVar11 = (long *)
            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  uStack0000000000000020 = unaff_s15;
  uStack0000000000000024 = unaff_s14;
  uStack0000000000000028 = unaff_s13;
  uStack000000000000002c = unaff_s12;
  iVar5 = FUN_026d4f8c(0);
  FUN_027a8b6c();
  fStack000000000000001c = (float)FUN_027a843c();
  fVar15 = (float)FUN_027a8464();
  uVar8 = FUN_027a83cc();
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(*plVar11);
  }
  FUN_027a7118(uVar8);
  lVar13 = *(long *)(*plVar11 + 0xb8);
  uVar22 = *(undefined4 *)(lVar13 + 0x18);
  uVar21 = *(undefined4 *)(lVar13 + 0x1c);
  uVar20 = *(undefined4 *)(lVar13 + 0x20);
  uVar19 = *(undefined4 *)(lVar13 + 0x24);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026d3158(uVar22,uVar21,uVar20,uVar19,0);
  lVar13 = FUN_026cc3f8(0);
  if (lVar13 == 0) goto LAB_027a9874;
  iVar6 = FUN_026cc440(lVar13,0);
  if (iVar6 != 8) {
    if (*(char *)((long)unaff_x24 + 0x434) != '\0') {
      lVar13 = (**(code **)(*unaff_x24 + 0x228))();
      if (lVar13 != 0) {
        uVar8 = FUN_026ce5d8(0);
        uVar9 = FUN_026da82c(uVar8,0);
        if ((uVar9 & 1) != 0) {
          FUN_026ce600(0,0);
          lVar13 = (**(code **)(*unaff_x24 + 0x228))();
          if (lVar13 == 0) goto LAB_027a9874;
          *(undefined4 *)(lVar13 + 0x34) = 0;
        }
      }
      *(undefined1 *)((long)unaff_x24 + 0x434) = 0;
    }
    puVar3 = Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__;
    if (*(char *)((long)unaff_x24 + 0x435) != '\0') {
      if ((char)unaff_x24[0x88] == '\0') goto LAB_027a9200;
      lVar13 = unaff_x24[0x87];
      if (*(int *)(*(long *)Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377661a == '\0') {
        thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
        DAT_0377661a = '\x01';
      }
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar3;
      }
      if (lVar13 == **(long **)(lVar10 + 0xb8)) {
LAB_027a91d8:
        iVar6 = FUN_026ce5d8(0);
        if ((iVar6 == 0) && (*(char *)((long)unaff_x24 + 0x3d5) != '\0')) {
LAB_027a91ec:
          FUN_026da7b4(0);
        }
      }
      else {
        lVar13 = unaff_x24[0x87];
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037885f0 == '\0') {
          thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
          DAT_037885f0 = '\x01';
        }
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar3;
        }
        puVar4 = OVRPlugin_OVRP_1_29_0_TypeInfo;
        if (lVar13 == *(long *)(*(long *)(lVar10 + 0xb8) + 8)) goto LAB_027a91d8;
        lVar13 = unaff_x24[0x87];
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_29_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037885f1 == '\0') {
          thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
          DAT_037885f1 = '\x01';
        }
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar4;
        }
        plVar11 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
        ;
        if (lVar13 != **(long **)(lVar10 + 0xb8)) {
          lVar13 = unaff_x24[0x87];
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_037885f2 == '\0') {
            thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
            DAT_037885f2 = '\x01';
          }
          plVar11 = (long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
          ;
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar4;
          }
          if (lVar13 != *(long *)(*(long *)(lVar10 + 0xb8) + 8)) goto LAB_027a9200;
          goto LAB_027a91ec;
        }
        FUN_026da7dc(0);
      }
LAB_027a9200:
      lVar13 = (**(code **)(*unaff_x24 + 0x228))();
      if (lVar13 != 0) {
        lVar13 = (**(code **)(*unaff_x24 + 0x228))();
        if (lVar13 == 0) goto LAB_027a9874;
        iVar6 = *(int *)(lVar13 + 0x34);
        iVar7 = FUN_026ce5d8(0);
        if (iVar6 != iVar7) {
          lVar13 = unaff_x24[0x87];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_0377661a == '\0') {
            thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
            DAT_0377661a = '\x01';
          }
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar3;
          }
          if (lVar13 != **(long **)(lVar10 + 0xb8)) {
            uVar19 = FUN_026ce5d8(0);
            *(undefined4 *)((long)unaff_x24 + 0x444) = uVar19;
          }
        }
        lVar13 = (**(code **)(*unaff_x24 + 0x228))();
        uVar19 = FUN_026ce5d8(0);
        if (lVar13 == 0) goto LAB_027a9874;
        *(undefined4 *)(lVar13 + 0x34) = uVar19;
      }
      *(undefined1 *)((long)unaff_x24 + 0x435) = 0;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377661a == '\0') {
        thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
        DAT_0377661a = '\x01';
      }
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar13 = *(long *)puVar3;
      }
      unaff_x24[0x87] = **(long **)(lVar13 + 0xb8);
    }
  }
  lVar13 = FUN_026cc3f8(0);
  if (lVar13 == 0) goto LAB_027a9874;
  FUN_026cc440(lVar13,0);
  in_stack_00000088 = &stack0x00000204;
  in_stack_00000090 = &stack0x000001f4;
  in_stack_00000098 = &stack0x000001f0;
  in_stack_000000a0 = &stack0x000001ec;
  in_stack_000000a8 = &stack0x00000208;
  in_stack_000000c0 = &stack0x000001d8;
  in_stack_000000c8 = &stack0x000001d0;
  in_stack_00000100 = &stack0x00000184;
  in_stack_00000080 = 0;
  in_stack_00000108 = &stack0x000001c8;
  in_stack_00000110 = &stack0x000001c4;
  in_stack_00000118 = &stack0x000001c0;
  in_stack_000000b0 = &stack0x000001e8;
  in_stack_000000b8 = &stack0x000001e4;
  in_stack_00000120 = &stack0x000001bc;
  in_stack_00000128 = &stack0x000001b8;
  in_stack_00000140 = &stack0x00000200;
  in_stack_00000148 = &stack0x00000180;
  in_stack_00000150 = &stack0x000001ac;
  in_stack_00000158 = &stack0x0000017c;
  in_stack_000000d0 = &stack0x00000194;
  in_stack_000000d8 = &stack0x00000190;
  in_stack_000000e0 = &stack0x0000019c;
  in_stack_000000e8 = &stack0x00000198;
  in_stack_000000f0 = &stack0x0000018c;
  in_stack_000000f8 = &stack0x00000188;
  in_stack_00000130 = &stack0x000001b4;
  in_stack_00000138 = &stack0x000001b0;
  in_stack_00000160 = &stack0x000001a8;
  in_stack_00000168 = &stack0x000001a4;
  in_stack_00000170 = &stack0x000001a0;
  in_stack_00000058 = unaff_x23[5];
  in_stack_00000050 = unaff_x23[4];
  in_stack_00000068 = unaff_x23[7];
  in_stack_00000060 = unaff_x23[6];
  in_stack_00000038 = unaff_x23[1];
  in_stack_00000030 = *unaff_x23;
  in_stack_00000048 = unaff_x23[3];
  in_stack_00000040 = unaff_x23[2];
  in_stack_00000078 = 0;
  FUN_026d51d8(&stack0x00000078,&stack0x00000030,0);
  puVar3 = System_Runtime_Serialization_ValueTypeFixupInfo_TypeInfo;
  lVar13 = *(long *)System_Runtime_Serialization_ValueTypeFixupInfo_TypeInfo;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar13 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18);
  if (DAT_0377a0ed == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ed = '\x01';
  }
  puVar3 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  uVar9 = FUN_017bc96c(uVar8,**(undefined8 **)
                               (*(long *)
                                 Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                               + 0xb8),0);
  if ((uVar9 & 1) != 0) {
    FUN_0265d9e8(uVar8,0);
  }
  (**(code **)(unaff_x22 + 0x18))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x28));
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar9 = FUN_017bc96c(uVar8,**(undefined8 **)(*(long *)puVar3 + 0xb8),0);
  if ((uVar9 & 1) != 0) {
    FUN_0265dab4(uVar8,0);
  }
  FUN_026d522c(&stack0x000001f8,0);
  FUN_00ce7598(&stack0x00000080);
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_027a7388(uStack0000000000000020,uStack0000000000000024,uStack0000000000000028,
               uStack000000000000002c);
  FUN_027a8c7c(in_stack_00000208);
  if (unaff_x19 == 0) goto LAB_027a9874;
  iVar6 = FUN_026cc440();
  if (iVar6 == 8) {
    fVar16 = (float)FUN_027a843c(in_stack_00000208);
    if (DAT_037757b6 == '\0') {
      thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
      DAT_037757b6 = '\x01';
    }
    puVar3 = System_Func<Assembly[]>_TypeInfo;
    fVar2 = DAT_028aa898;
    fVar17 = ABS(fStack000000000000001c);
    if (ABS(fStack000000000000001c) <= ABS(fVar16)) {
      fVar17 = ABS(fVar16);
    }
    fVar18 = **(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) * 8.0;
    fVar1 = fVar17 * DAT_028aa898;
    if (fVar17 * DAT_028aa898 <= fVar18) {
      fVar1 = fVar18;
    }
    if (ABS(fVar16 - fStack000000000000001c) < fVar1) {
      fVar16 = (float)FUN_027a8464(in_stack_00000208);
      if (DAT_037757b6 == '\0') {
        thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
        DAT_037757b6 = '\x01';
      }
      fVar17 = ABS(fVar15);
      if (ABS(fVar15) <= ABS(fVar16)) {
        fVar17 = ABS(fVar16);
      }
      fVar18 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
      fVar1 = fVar17 * fVar2;
      if (fVar17 * fVar2 <= fVar18) {
        fVar1 = fVar18;
      }
      if (ABS(fVar16 - fVar15) < fVar1) goto LAB_027a975c;
    }
    if ((unaff_x21 & 1) != 0) {
      FUN_02688370(0);
      uVar9 = FUN_026886bc(0);
      puVar3 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
      if ((uVar9 & 1) != 0) {
        plVar11 = (long *)FUN_02746b14(in_stack_00000208,0);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar13 == 0) ||
           (FUN_016f27fc(lVar13,in_stack_00000208,
                         *(undefined8 *)System_Collections_Generic_List<PlacePoint>_TypeInfo,0),
           plVar11 == (long *)0x0)) {
LAB_027a9874:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)Sirenix_Serialization_NodeInfo___TypeInfo) {
              puVar12 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_027a97f0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_00d59724(plVar11,*(long *)Sirenix_Serialization_NodeInfo___TypeInfo,1);
LAB_027a97f0:
        (*(code *)*puVar12)(plVar11,lVar13,puVar12[1]);
        goto LAB_027a975c;
      }
    }
    FUN_0274a398(in_stack_00000208,8,0);
  }
LAB_027a975c:
  iVar6 = FUN_026cc440();
  if ((iVar6 != 0xb) && (iVar6 = FUN_026cc440(), puVar3 = StringLiteral_302, iVar6 != 0xc)) {
    iVar6 = FUN_026d4f8c(0);
    if (iVar5 < iVar6) {
      iVar6 = *(int *)(*(long *)puVar3 + 0xe0);
      puVar12 = (undefined8 *)System_Numerics_Vector<ushort>_TypeInfo;
    }
    else {
      if (iVar5 <= iVar6) goto LAB_027a9810;
      iVar6 = *(int *)(*(long *)puVar3 + 0xe0);
      puVar12 = (undefined8 *)Method_System_Collections_Generic_Stack<int>_get_Count__;
    }
    if (iVar6 == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*puVar12,0);
  }
LAB_027a9810:
  while (iVar6 = FUN_026d4f8c(0), iVar5 < iVar6) {
    FUN_026d0ce8(0);
  }
  iVar5 = FUN_026cc440();
  if (iVar5 == 0xc) {
    FUN_0274a398(in_stack_00000208,0x800,0);
  }
  return;
}


