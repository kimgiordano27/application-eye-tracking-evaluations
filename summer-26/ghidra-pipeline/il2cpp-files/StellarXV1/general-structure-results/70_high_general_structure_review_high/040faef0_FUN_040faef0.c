/*
FUNCTION_NAME: FUN_040faef0
ENTRY_POINT: 040faef0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


undefined8 FUN_040faef0(undefined8 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *param_2;
  if (iVar1 < 0x2000003) {
    if (iVar1 < 0x1000004) {
      if (iVar1 < 0x1000001) {
        if (iVar1 == -1) {
          pcVar2 = "Unexpected error";
        }
        else if (iVar1 == 0) {
          pcVar2 = "Success";
        }
        else {
          if (iVar1 != 0x1000000) goto LAB_040fb258;
          pcVar2 = "Out of memory";
        }
      }
      else if (iVar1 == 0x1000001) {
        pcVar2 = "Out of system resources";
      }
      else if (iVar1 == 0x1000002) {
        pcVar2 = "Invalid address range";
      }
      else {
        if (iVar1 != 0x1000003) goto LAB_040fb258;
        pcVar2 = "Invalid argument";
      }
    }
    else if (iVar1 < 0x1000007) {
      if (iVar1 == 0x1000004) {
        pcVar2 = "Invalid buffer size";
      }
      else if (iVar1 == 0x1000005) {
        pcVar2 = "Invalid state";
      }
      else {
        if (iVar1 != 0x1000006) goto LAB_040fb258;
        pcVar2 = "Not supported";
      }
    }
    else if (iVar1 < 0x2000001) {
      if (iVar1 == 0x1000007) {
        pcVar2 = "Time out";
      }
      else {
        if (iVar1 != 0x2000000) goto LAB_040fb258;
        pcVar2 = "Unsupported alignment";
      }
    }
    else if (iVar1 == 0x2000001) {
      pcVar2 = "Invalid page size";
    }
    else {
      if (iVar1 != 0x2000002) goto LAB_040fb258;
      pcVar2 = "Invalid page count";
    }
  }
  else if (iVar1 < 0x5000000) {
    if (iVar1 < 0x4000001) {
      if (iVar1 == 0x2000003) {
        pcVar2 = "Unsupported page state";
      }
      else if (iVar1 == 0x3000000) {
        pcVar2 = "Thread can not join itself";
      }
      else {
        if (iVar1 != 0x4000000) goto LAB_040fb258;
        pcVar2 = "Network initialization error";
      }
    }
    else if (iVar1 < 0x4000003) {
      if (iVar1 == 0x4000001) {
        pcVar2 = "Address in use";
      }
      else {
        if (iVar1 != 0x4000002) goto LAB_040fb258;
        pcVar2 = "Address unreachable";
      }
    }
    else if (iVar1 == 0x4000003) {
      pcVar2 = "Address family not supported";
    }
    else {
      if (iVar1 != 0x4000004) goto LAB_040fb258;
      pcVar2 = "Disconnected";
    }
  }
  else if (iVar1 < 0x6000000) {
    if (iVar1 == 0x5000000) {
      pcVar2 = "Invalid pathname";
    }
    else if (iVar1 == 0x5000001) {
      pcVar2 = "Requested access is not allowed";
    }
    else {
      if (iVar1 != 0x5000002) goto LAB_040fb258;
      pcVar2 = "General IO error";
    }
  }
  else if (iVar1 < 0x7000000) {
    if (iVar1 == 0x6000000) {
      pcVar2 = "Failed to open the requested dynamic library";
    }
    else {
      if (iVar1 != 0x6000001) goto LAB_040fb258;
      pcVar2 = "The requested function was not found";
    }
  }
  else if (iVar1 == 0x7000000) {
    pcVar2 = 
    "The requested hostname is valid, but no address exists that is compatible with the current network configuration."
    ;
  }
  else {
    if (iVar1 != 0x7000001) goto LAB_040fb258;
    pcVar2 = "Temporary failure, try again.";
  }
  FUN_040fb27c(param_1,&DAT_01a8d289,pcVar2);
LAB_040fb258:
  FUN_040fb27c(param_1," (0x%08x)",*param_2);
  return param_1;
}


