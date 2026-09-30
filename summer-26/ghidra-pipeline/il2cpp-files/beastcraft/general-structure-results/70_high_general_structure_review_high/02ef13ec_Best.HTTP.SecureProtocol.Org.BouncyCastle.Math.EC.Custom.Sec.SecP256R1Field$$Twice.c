/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1Field$$Twice
ENTRY_POINT: 02ef13ec
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


undefined8
Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP256R1Field__Twice
          (undefined8 param_1)

{
  char *pcVar1;
  int in_w8;
  uint in_w9;
  undefined4 *unaff_x20;
  
  if ((int)(in_w9 & 0xffff | 0x2000000) < in_w8) {
    if (in_w8 < 0x5000000) {
      if (in_w8 < 0x4000001) {
        if (in_w8 == 0x2000003) {
          pcVar1 = "Unsupported page state";
        }
        else if (in_w8 == 0x3000000) {
          pcVar1 = "Thread can not join itself";
        }
        else {
          if (in_w8 != 0x4000000) goto LAB_02ef1740;
          pcVar1 = "Network initialization error";
        }
      }
      else if (in_w8 < 0x4000003) {
        if (in_w8 == 0x4000001) {
          pcVar1 = "Address in use";
        }
        else {
          if (in_w8 != 0x4000002) goto LAB_02ef1740;
          pcVar1 = "Address unreachable";
        }
      }
      else if (in_w8 == 0x4000003) {
        pcVar1 = "Address family not supported";
      }
      else {
        if (in_w8 != 0x4000004) goto LAB_02ef1740;
        pcVar1 = "Disconnected";
      }
    }
    else if (in_w8 < 0x6000000) {
      if (in_w8 == 0x5000000) {
        pcVar1 = "Invalid pathname";
      }
      else if (in_w8 == 0x5000001) {
        pcVar1 = "Requested access is not allowed";
      }
      else {
        if (in_w8 != 0x5000002) goto LAB_02ef1740;
        pcVar1 = "General IO error";
      }
    }
    else if (in_w8 < 0x7000000) {
      if (in_w8 == 0x6000000) {
        pcVar1 = "Failed to open the requested dynamic library";
      }
      else {
        if (in_w8 != 0x6000001) goto LAB_02ef1740;
        pcVar1 = "The requested function was not found";
      }
    }
    else if (in_w8 == 0x7000000) {
      pcVar1 = 
      "The requested hostname is valid, but no address exists that is compatible with the current network configuration."
      ;
    }
    else {
      if (in_w8 != 0x7000001) goto LAB_02ef1740;
      pcVar1 = "Temporary failure, try again.";
    }
  }
  else if (in_w8 < 0x1000004) {
    if (in_w8 < 0x1000001) {
      if (in_w8 == -1) {
        pcVar1 = "Unexpected error";
      }
      else if (in_w8 == 0) {
        pcVar1 = "Success";
      }
      else {
        if (in_w8 != 0x1000000) goto LAB_02ef1740;
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
      if (in_w8 != 0x1000003) goto LAB_02ef1740;
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
      if (in_w8 != 0x1000006) goto LAB_02ef1740;
      pcVar1 = "Not supported";
    }
  }
  else if (in_w8 < 0x2000001) {
    if (in_w8 == 0x1000007) {
      pcVar1 = "Time out";
    }
    else {
      if (in_w8 != 0x2000000) goto LAB_02ef1740;
      pcVar1 = "Unsupported alignment";
    }
  }
  else if (in_w8 == 0x2000001) {
    pcVar1 = "Invalid page size";
  }
  else {
    if (in_w8 != 0x2000002) goto LAB_02ef1740;
    pcVar1 = "Invalid page count";
  }
  FUN_02ef1764(param_1,&DAT_01338dd5,pcVar1);
LAB_02ef1740:
  FUN_02ef1764(param_1," (0x%08x)",*unaff_x20);
  return param_1;
}


