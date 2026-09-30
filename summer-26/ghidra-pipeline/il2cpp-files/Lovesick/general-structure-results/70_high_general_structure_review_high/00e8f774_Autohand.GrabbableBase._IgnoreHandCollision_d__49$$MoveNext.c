/*
FUNCTION_NAME: Autohand.GrabbableBase.<IgnoreHandCollision>d__49$$MoveNext
ENTRY_POINT: 00e8f774
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_5;telemetry_or_network_hits_4
*/


void Autohand_GrabbableBase_<IgnoreHandCollision>d__49__MoveNext(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  uint uVar7;
  
  thunk_FUN_00d48444(Method_System_Tuple<MRUKAnchor,_Data_AnchorData>_get_Item2__);
  thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_IsMatch__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
  thunk_FUN_00d48444(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xfee) = 1;
  lVar4 = FUN_010c3404();
  puVar3 = Method_System_Text_RegularExpressions_Regex_IsMatch__;
  puVar2 = System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar5 = *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0)
        goto 
        Autohand_GrabbableBase_<IgnoreHandCollision>d__49__System_Collections_IEnumerator_get_Current
        ;
        lVar6 = *(long *)(lVar5 + 0x20);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar5 == 0) || (FUN_013df2bc(), lVar6 == 0))
        goto 
        Autohand_GrabbableBase_<IgnoreHandCollision>d__49__System_Collections_IEnumerator_get_Current
        ;
        FUN_013df7e0(lVar6,lVar5,*(undefined8 *)puVar2);
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    if (*(long *)(unaff_x19 + 0x78) != 0) {
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x70);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__)
      ;
      if ((lVar4 != 0) && (FUN_026c8404(), lVar5 != 0)) {
        FUN_026c8574(lVar5,lVar4,0);
        return;
      }
    }
  }
Autohand_GrabbableBase_<IgnoreHandCollision>d__49__System_Collections_IEnumerator_get_Current:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


