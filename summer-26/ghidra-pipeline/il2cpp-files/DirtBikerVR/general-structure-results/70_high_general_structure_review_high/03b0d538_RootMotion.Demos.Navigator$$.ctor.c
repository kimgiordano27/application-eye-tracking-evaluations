/*
FUNCTION_NAME: RootMotion.Demos.Navigator$$.ctor
ENTRY_POINT: 03b0d538
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


undefined8 RootMotion_Demos_Navigator___ctor(undefined8 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int in_w8;
  
  if (in_w8 < 0x2000002) {
    if (in_w8 < 0x1000004) {
      if (in_w8 < 0x1000001) {
        if (in_w8 == -1) {
          pcVar1 = "Unexpected error";
        }
        else if (in_w8 == 0) {
          pcVar1 = "Success";
        }
        else {
          if (in_w8 != 0x1000000) goto LAB_03b0d848;
          pcVar1 = "Out of memory";
        }
      }
      else if (in_w8 == 0x1000001) {
        pcVar1 = "Out of system resources";
      }
      else if (in_w8 == 0x1000002) {
        pcVar1 = "Invalid address range";
      }
      else {
        if (in_w8 != 0x1000003) goto LAB_03b0d848;
        pcVar1 = "Invalid argument";
      }
    }
    else if (in_w8 < 0x1000007) {
      if (in_w8 == 0x1000004) {
        pcVar1 = "Invalid buffer size";
      }
      else if (in_w8 == 0x1000005) {
        pcVar1 = "Invalid state";
      }
      else {
        if (in_w8 != 0x1000006) goto LAB_03b0d848;
        pcVar1 = "Not supported";
      }
    }
    else if (in_w8 == 0x1000007) {
      pcVar1 = "Time out";
    }
    else if (in_w8 == 0x2000000) {
      pcVar1 = "Unsupported alignment";
    }
    else {
      if (in_w8 != 0x2000001) goto LAB_03b0d848;
      pcVar1 = "Invalid page size";
    }
  }
  else if (in_w8 < 0x4000003) {
    if (in_w8 < 0x4000000) {
      if (in_w8 == 0x2000002) {
        pcVar1 = "Invalid page count";
      }
      else if (in_w8 == 0x2000003) {
        pcVar1 = "Unsupported page state";
      }
      else {
        if (in_w8 != 0x3000000) goto LAB_03b0d848;
        pcVar1 = "Thread can not join itself";
      }
    }
    else if (in_w8 == 0x4000000) {
      pcVar1 = "Network initialization error";
    }
    else if (in_w8 == 0x4000001) {
      pcVar1 = "Address in use";
    }
    else {
      if (in_w8 != 0x4000002) goto LAB_03b0d848;
      pcVar1 = "Address unreachable";
    }
  }
  else if (in_w8 < 0x5000001) {
    if (in_w8 == 0x4000003) {
      pcVar1 = "Address family not supported";
    }
    else if (in_w8 == 0x4000004) {
      pcVar1 = "Disconnected";
    }
    else {
      if (in_w8 != 0x5000000) goto LAB_03b0d848;
      pcVar1 = "Invalid pathname";
    }
  }
  else if (in_w8 < 0x6000000) {
    if (in_w8 == 0x5000001) {
      pcVar1 = "Requested access is not allowed";
    }
    else {
      if (in_w8 != 0x5000002) goto LAB_03b0d848;
      pcVar1 = "General IO error";
    }
  }
  else if (in_w8 == 0x6000000) {
    pcVar1 = "Failed to open the requested dynamic library";
  }
  else {
    if (in_w8 != 0x6000001) goto LAB_03b0d848;
    pcVar1 = "The requested function was not found";
  }
  FUN_03b0d86c(param_1,&DAT_01617dfe,pcVar1);
LAB_03b0d848:
  FUN_03b0d86c(param_1," (0x%08x)",*param_2);
  return param_1;
}


