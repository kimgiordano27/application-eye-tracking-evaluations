/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_pf_request_permission_for_network_get
ENTRY_POINT: 07888f5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_request_permission_for_network_get
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = FUN_065cc360(param_2,**(undefined8 **)(param_1 + 0x478));
  if ((uVar2 & 1) != 0) {
LAB_07888f6c:
    FUN_07889a74();
    return;
  }
  if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_07889288;
  uVar2 = FUN_065cc360(*(long *)(unaff_x20 + 0x18),*(undefined8 *)System_Func<InputEvent>_TypeInfo,0
                      );
  if ((uVar2 & 1) != 0) {
    FUN_07889b2c();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = FUN_07931b28(uVar3,0);
  if (uVar1 < 0x49f653ff) {
                    /* try { // try from 07888fd4 to 079891a7 has its CatchHandler @ 07888fd4
                       catch() { ... } // from try @ 07888fd4 with catch @ 07888fd4
                       catch() { ... } // from try @ 07889a3c with catch @ 07888fd4
                       catch() { ... } // from try @ 07889bc4 with catch @ 07888fd4
                       catch() { ... } // from try @ 0788a3f4 with catch @ 07888fd4
                       catch() { ... } // from try @ 0788a53c with catch @ 07888fd4
                       catch() { ... } // from try @ 0788a634 with catch @ 07888fd4
                       catch() { ... } // from try @ 0788a870 with catch @ 07888fd4 */
    if (uVar1 < 0x41802ba4) {
      if (uVar1 == 0x2a0c975e) {
        uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)PTR_DAT_0848b4e8,0);
        if ((uVar2 & 1) != 0) {
          if (unaff_x19 != 0) {
            FUN_078f66c0();
            return;
          }
          goto LAB_07889288;
        }
      }
      else if ((uVar1 == 0x41802ba3) &&
              (uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)
                                                 OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor_UnboundAnchor>_TypeInfo
                                          ,0), (uVar2 & 1) != 0)) {
        if (unaff_x19 != 0) {
          FUN_078f6800();
          return;
        }
LAB_07889288:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else if (uVar1 == 0x43e9f9d5) {
      uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)
                                        System_Collections_Generic_KeyValuePair<object,_bool>_TypeInfo
                                 ,0);
      if ((uVar2 & 1) != 0) {
        if (unaff_x19 != 0) {
          FUN_078f6ebc();
          return;
        }
        goto LAB_07889288;
      }
    }
    else if ((uVar1 == 0x49f653fe) &&
            (uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)
                                               System_Collections_Generic_KeyValuePair<Int32Enum,_object>_TypeInfo
                                        ,0), (uVar2 & 1) != 0)) goto LAB_07888f6c;
  }
  else if (uVar1 < 0x95e56bd2) {
    if (uVar1 == 0x95e56bd1) {
      uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)
                                        System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo
                                 ,0);
      if ((uVar2 & 1) != 0) {
        if (unaff_x19 != 0) {
          FUN_078f6738();
          return;
        }
        goto LAB_07889288;
      }
    }
    else if ((uVar1 == 0x7be2c3bd) &&
            (uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)
                                               System_Collections_Generic_KeyValuePair<OVRAnchor,_object>_TypeInfo
                                        ,0), (uVar2 & 1) != 0)) {
      if (unaff_x19 != 0) {
        FUN_078f66cc();
        return;
      }
      goto LAB_07889288;
    }
  }
  else if (uVar1 == 0x9783b396) {
    uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)
                                      System_Collections_Generic_KeyValuePair<object,_object>_TypeInfo
                               ,0);
    if ((uVar2 & 1) != 0) {
      if (unaff_x19 != 0) {
        FUN_078f6864();
        return;
      }
      goto LAB_07889288;
    }
  }
  else if (uVar1 == 0xc7e00084) {
    uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)
                                      System_Collections_Generic_KeyValuePair<int,_object>_TypeInfo,
                               0);
    if ((uVar2 & 1) != 0) {
      if (unaff_x19 != 0) {
        FUN_078f679c();
        return;
      }
      goto LAB_07889288;
    }
  }
  else if ((uVar1 == 0xf98447d2) &&
          (uVar2 = thunk_FUN_065cbffc(uVar3,*(undefined8 *)
                                             Newtonsoft_Json_Linq_JEnumerable<JToken>_TypeInfo,0),
          (uVar2 & 1) != 0)) {
    if (unaff_x19 != 0) {
      FUN_078f68c0();
      return;
    }
    goto LAB_07889288;
  }
  uVar3 = FUN_065cddf0(*(undefined8 *)
                        System_Collections_Generic_KeyValuePair<string,_string>_TypeInfo,
                       *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)PTR_DAT_0848d460,0);
  FUN_078bb9a4(uVar3,0);
  return;
}


