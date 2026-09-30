/*
FUNCTION_NAME: FUN_06ac4af8
ENTRY_POINT: 06ac4af8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_06ac4af8(long *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 local_40 [16];
  long local_28;
  
  puVar2 = 
  Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
  ;
                    /* try { // try from 06ac4af8 to 06bc4aff has its CatchHandler @ 06ac4b00 */
                    /* catch() { ... } // from try @ 06ac47bc with catch @ 06ac4b00
                       catch() { ... } // from try @ 06ac4834 with catch @ 06ac4b00
                       catch() { ... } // from try @ 06ac485c with catch @ 06ac4b00
                       catch() { ... } // from try @ 06ac4998 with catch @ 06ac4b00
                       catch() { ... } // from try @ 06ac4a28 with catch @ 06ac4b00
                       catch() { ... } // from try @ 06ac4ac4 with catch @ 06ac4b00
                       catch() { ... } // from try @ 06ac4af8 with catch @ 06ac4b00 */
                    /* try { // try from 06ac4b04 to 06bc4ceb has its CatchHandler @ 06ac4b04
                       catch() { ... } // from try @ 06ac4b04 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac4fa8 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac5090 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac50b8 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac5180 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac51b4 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac52d4 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac53e8 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac542c with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac5464 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac54ac with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac54c8 with catch @ 06ac4b04
                       catch() { ... } // from try @ 06ac5500 with catch @ 06ac4b04 */
  if ((DAT_076e318b & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<Vector4>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<Texture2D>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<UIHoverEventArgs>__ctor__);
    DAT_076e318b = 1;
  }
  local_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  plVar3 = (long *)thunk_FUN_032a55a4(param_2,*(undefined8 *)puVar2);
  lVar6 = 0;
  if (plVar3 == (long *)0x0) {
LAB_06ac4c20:
    bVar1 = true;
  }
  else {
    lVar7 = *plVar3;
    lVar6 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_06ac4be8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar3,lVar6,0);
FUN_06ac4be8:
    lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar6 == 0) goto LAB_06ac4c20;
    plVar3 = (long *)param_1[0x14];
    if (plVar3 == (long *)0x0) goto LAB_06ac4d60;
    uVar8 = (**(code **)(*plVar3 + 0x178))(plVar3,lVar6,*(undefined8 *)(*plVar3 + 0x180));
    if ((uVar8 & 1) == 0) {
      uVar5 = FUN_057a25c4(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Texture2D>_Invoke__,
                           param_2,0);
      uVar5 = FUN_057a19ac(uVar5,*(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<UIHoverEventArgs>__ctor__,0);
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb2b08(uVar5,param_1,0);
      return;
    }
    bVar1 = false;
  }
  plVar3 = (long *)param_1[0x13];
  if (plVar3 == (long *)0x0) {
LAB_06ac4d60:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar8 = (**(code **)(*plVar3 + 0x198))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x1a0));
  if ((uVar8 & 1) != 0) {
    if (!bVar1) {
      if (param_1[0x1b] == 0) goto LAB_06ac4d60;
      FUN_03d0b564(param_1[0x1b],param_2,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>__ctor__);
    }
    if (param_1[0x29] == 0) goto LAB_06ac4d60;
    local_40 = FUN_03fdb010(param_1[0x29],&local_28,
                            *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__);
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(long *)(local_28 + 0x10) = (long)param_1;
    thunk_FUN_0333a630((long *)(local_28 + 0x10),param_1);
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(undefined8 *)(local_28 + 0x18) = param_2;
    thunk_FUN_0333a630((undefined8 *)(local_28 + 0x18),param_2);
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(long *)(local_28 + 0x20) = lVar6;
    thunk_FUN_0333a630((long *)(local_28 + 0x20),lVar6);
    (**(code **)(*param_1 + 0x2a8))(param_1,local_28,*(undefined8 *)(*param_1 + 0x2b0));
    FUN_0479c18c(local_40,*(undefined8 *)
                           Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>__ctor__);
  }
  return;
}


