/*
FUNCTION_NAME: FUN_044c9e20
ENTRY_POINT: 044c9e20
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


undefined8 FUN_044c9e20(undefined8 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *param_2;
  if (iVar1 < 0x3000000) {
    if (iVar1 < 0x2000000) {
      switch(iVar1) {
      case 0x1000000:
        pcVar2 = "Out of memory";
        break;
      case 0x1000001:
        pcVar2 = "Out of system resources";
        break;
      case 0x1000002:
        pcVar2 = "Invalid address range";
        break;
      case 0x1000003:
        pcVar2 = "Invalid argument";
        break;
      case 0x1000004:
        pcVar2 = "Invalid buffer size";
        break;
      case 0x1000005:
        pcVar2 = "Invalid state";
        break;
      case 0x1000006:
        pcVar2 = "Not supported";
        break;
      case 0x1000007:
        pcVar2 = "Time out";
        break;
      default:
        if (iVar1 == -1) {
          pcVar2 = "Unexpected error";
        }
        else {
          if (iVar1 != 0) goto switchD_044c9f2c_default;
          pcVar2 = "Success";
        }
      }
    }
    else {
      switch(iVar1) {
      case 0x2000000:
        pcVar2 = "Unsupported alignment";
        break;
      case 0x2000001:
        pcVar2 = "Invalid page size";
        break;
      case 0x2000002:
        pcVar2 = "Invalid page count";
        break;
      case 0x2000003:
        pcVar2 = "Unsupported page state";
        break;
      default:
        goto switchD_044c9f2c_default;
      }
    }
  }
  else if (iVar1 < 0x5000000) {
    switch(iVar1) {
    case 0x4000000:
      pcVar2 = "Network initialization error";
      break;
    case 0x4000001:
      pcVar2 = "Address in use";
      break;
    case 0x4000002:
      pcVar2 = "Address unreachable";
      break;
    case 0x4000003:
      pcVar2 = "Address family not supported";
      break;
    case 0x4000004:
      pcVar2 = "Disconnected";
      break;
    default:
      if (iVar1 != 0x3000000) goto switchD_044c9f2c_default;
      pcVar2 = "Thread can not join itself";
    }
  }
  else if (iVar1 < 0x5000002) {
    if (iVar1 == 0x5000000) {
      pcVar2 = "Invalid pathname";
    }
    else {
      if (iVar1 != 0x5000001) goto switchD_044c9f2c_default;
      pcVar2 = "Requested access is not allowed";
    }
  }
  else if (iVar1 == 0x5000002) {
    pcVar2 = "General IO error";
  }
  else if (iVar1 == 0x6000000) {
    pcVar2 = "Failed to open the requested dynamic library";
  }
  else {
    if (iVar1 != 0x6000001) goto switchD_044c9f2c_default;
    pcVar2 = "The requested function was not found";
  }
  FUN_044ca09c(param_1,&DAT_01c9c665,pcVar2);
switchD_044c9f2c_default:
  FUN_044ca09c(param_1," (0x%08x)",*param_2);
  return param_1;
}


