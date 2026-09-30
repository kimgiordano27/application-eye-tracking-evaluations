/*
FUNCTION_NAME: FUN_01c77b4c
ENTRY_POINT: 01c77b4c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_01c77b4c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03fed76f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
                      );
    DAT_03fed76f = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar5,0);
    if ((uVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
                    /* try { // try from 01c77bcc to 01d77bcf has its CatchHandler @ 01c77c24 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
                    /* try { // try from 01c77be0 to 01d77bf3 has its CatchHandler @ 01c77c0c */
      FUN_03923a90(uVar5,0);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 01c77bf4 to 01d77c3b has its CatchHandler @ 01c779d8 */
    plVar3 = (long *)FUN_01e8a9f8(param_1,*(undefined8 *)
                                           Field_<PrivateImplementationDetails>_215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49
                                 );
                    /* catch() { ... } // from try @ 01c77be0 with catch @ 01c77c0c */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar2 = FUN_03923030(plVar3,0);
                    /* catch() { ... } // from try @ 01c77b0c with catch @ 01c77c24
                       catch() { ... } // from try @ 01c77bcc with catch @ 01c77c24 */
    if ((uVar2 & 1) != 0) {
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 01c77c3c to 01d77ccb has its CatchHandler @ 01c77c3c
                       catch() { ... } // from try @ 01c77c3c with catch @ 01c77c3c
                       catch() { ... } // from try @ 01c77ce4 with catch @ 01c77c3c
                       catch() { ... } // from try @ 01c780dc with catch @ 01c77c3c */
        uVar5 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar2 = FUN_03923030(uVar5,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0x4c) = 1;
        lVar4 = *(long *)(param_1 + 0x30);
        uVar5 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
        if (lVar4 != 0) {
          FUN_02203ccc(lVar4,uVar5,
                       *(undefined8 *)
                        Field_<PrivateImplementationDetails>_4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
                      );
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


