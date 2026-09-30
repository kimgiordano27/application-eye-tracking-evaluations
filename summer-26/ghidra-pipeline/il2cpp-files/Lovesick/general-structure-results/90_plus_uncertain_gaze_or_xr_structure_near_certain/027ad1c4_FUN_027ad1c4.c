/*
FUNCTION_NAME: FUN_027ad1c4
ENTRY_POINT: 027ad1c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 180
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_027ad1c4(long *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  long local_48;
  
  puVar4 = 
  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>__ctor__;
  if ((DAT_037887c4 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2c08);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_2668);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_40__);
    thunk_FUN_00d48444(Method_System_Data_XSDSchema_InstantiateSimpleTable__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_Promise<SessionInstallationStatus>_get_result__
                      );
    thunk_FUN_00d48444(Method_System_Globalization_CompareInfo_LastIndexOf__);
    thunk_FUN_00d48444(StringLiteral_12083);
    thunk_FUN_00d48444(System_Xml_BinHexDecoder_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MRUKRoom_Surface>_get_Count__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>__ctor__
                      );
    thunk_FUN_00d48444(System_AssemblyLoadEventArgs_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    DAT_037887c4 = 1;
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar4;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    uVar6 = FUN_0129aa60(**(long **)(lVar5 + 0xb8),param_1,
                         *(undefined8 *)Method_System_Data_XSDSchema_InstantiateSimpleTable__);
    if ((uVar6 & 1) == 0) {
      if (((param_1 != (long *)0x0) &&
          (plVar7 = (long *)thunk_FUN_00d93c64(param_1,0), plVar7 != (long *)0x0)) &&
         (lVar5 = (**(code **)(*plVar7 + 0x8a8))(plVar7,*(undefined8 *)(*plVar7 + 0x8b0)),
         puVar3 = System_AssemblyLoadEventArgs_TypeInfo, lVar5 != 0)) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar11 = 0;
          do {
            if (uVar1 <= uVar11) {
LAB_027ad5a4:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar7 = *(long **)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_027ad5a0;
            uVar6 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
            if ((uVar6 & 1) != 0) {
              lVar8 = *(long *)puVar4;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar8 = *(long *)puVar4;
              }
              plVar10 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
              uVar9 = (**(code **)(*plVar7 + 0x468))(plVar7,*(undefined8 *)(*plVar7 + 0x470));
              if (plVar10 == (long *)0x0) goto LAB_027ad5a0;
              uVar6 = (**(code **)(*plVar10 + 0x2c8))
                                (plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x2d0));
              if ((uVar6 & 1) != 0) {
                lVar5 = (**(code **)(*plVar7 + 0x488))(plVar7,*(undefined8 *)(*plVar7 + 0x490));
                if (lVar5 == 0) goto LAB_027ad5a0;
                if (*(int *)(lVar5 + 0x18) == 0) goto LAB_027ad5a4;
                if (*(long *)(lVar5 + 0x20) != 0) {
                  lVar5 = FUN_0179c590(*(long *)(lVar5 + 0x20),0);
                  if (lVar5 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    uVar9 = *(undefined8 *)puVar3;
                    lVar8 = thunk_FUN_00d6225c(lVar5,uVar9);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(lVar5,uVar9);
                    }
                  }
                  goto LAB_027ad3fc;
                }
                break;
              }
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)uVar1);
        }
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_40__);
        if (lVar8 != 0) {
          FUN_02770020(lVar8,0);
LAB_027ad3fc:
          lVar5 = *param_1;
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>__ctor__
                           + 300);
          if ((*(byte *)(lVar5 + 300) < bVar2) ||
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>__ctor__
             )) {
            bVar2 = *(byte *)(*(long *)Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__ + 300)
            ;
            if ((bVar2 <= *(byte *)(lVar5 + 300)) &&
               (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) ==
                *(long *)Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__)) {
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12083);
              puVar3 = StringLiteral_2668;
              if (lVar5 == 0) goto LAB_027ad5a0;
              FUN_012c5834(lVar5,0,*(undefined8 *)System_Xml_BinHexDecoder_TypeInfo,0);
              FUN_010bfbd4(param_1,lVar5,0,*(undefined8 *)puVar3);
            }
          }
          else {
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f2c08);
            if (lVar5 == 0) goto LAB_027ad5a0;
            FUN_011c181c(lVar5,0,*(undefined8 *)
                                  Method_System_Collections_Generic_List<MRUKRoom_Surface>_get_Count__
                         ,0);
            FUN_02770270(param_1,lVar5,0);
          }
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar5 = *(long *)puVar4;
          }
          if (**(long **)(lVar5 + 0xb8) != 0) {
            FUN_01299e64(**(long **)(lVar5 + 0xb8),param_1,lVar8,
                         *(undefined8 *)Method_System_Globalization_CompareInfo_LastIndexOf__);
            return lVar8;
          }
        }
      }
    }
    else {
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar4;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        FUN_01299bc0(**(long **)(lVar5 + 0xb8),param_1,&local_48,
                     *(undefined8 *)
                      Method_UnityEngine_XR_ARSubsystems_Promise<SessionInstallationStatus>_get_result__
                    );
        return local_48;
      }
    }
  }
LAB_027ad5a0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


