/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_base__get
ENTRY_POINT: 05fddeb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


bool Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_base__get
               (void)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint in_w8;
  long lVar4;
  ushort unaff_w19;
  long unaff_x20;
  ushort *puVar5;
  long unaff_x21;
  ushort *unaff_x22;
  long lVar6;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  
  while( true ) {
    if (in_w8 == unaff_w19) {
      return true;
    }
    unaff_w25 = unaff_w25 + -1;
    unaff_x22 = unaff_x22 + 0xc;
    if (unaff_w25 == 0) break;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    in_w8 = (uint)*unaff_x22;
  }
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  lVar6 = *unaff_x24;
  iVar1 = *(int *)(unaff_x21 + 0x40);
  iVar2 = *(int *)(unaff_x21 + 0x44);
  lVar4 = *(long *)(lVar6 + 0x38);
  if (lVar4 == 0) {
    FUN_02dcfd74(lVar6);
    lVar4 = *(long *)(lVar6 + 0x38);
  }
  lVar4 = FUN_036ee4c4(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar4 + 0x10));
  if (iVar2 < 0) {
    FUN_05508bc8(0);
  }
  else if (iVar2 != 0) {
    puVar5 = (ushort *)(lVar4 + (long)iVar1 * 0x18);
    while( true ) {
      iVar2 = iVar2 + -1;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar3 = *puVar5;
      if ((uVar3 ^ unaff_w19) == 0) break;
      puVar5 = puVar5 + 0xc;
      if (iVar2 == 0) {
        return (uVar3 ^ unaff_w19) == 0;
      }
    }
    return true;
  }
  return false;
}


