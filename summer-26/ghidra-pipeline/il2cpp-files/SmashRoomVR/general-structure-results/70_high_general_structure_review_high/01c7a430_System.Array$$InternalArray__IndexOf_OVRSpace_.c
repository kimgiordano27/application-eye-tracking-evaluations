/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRSpace>
ENTRY_POINT: 01c7a430
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


undefined8 System_Array__InternalArray__IndexOf<OVRSpace>(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  long *unaff_x21;
  
  uVar1 = FUN_01f25510();
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
                    /* try { // try from 01c7a44c to 01d7a4c3 has its CatchHandler @ 01c7a44c
                       catch() { ... } // from try @ 01c7a44c with catch @ 01c7a44c
                       catch() { ... } // from try @ 01c7a4dc with catch @ 01c7a44c
                       catch() { ... } // from try @ 01c7a578 with catch @ 01c7a44c */
  thunk_FUN_01b4f09c(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  uVar2 = FUN_03922f24(**(undefined8 **)(*unaff_x20 + 0xb8),0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar3 = FUN_03b26f4c(0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x21);
    }
    uVar2 = FUN_03922f24(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
                    /* try { // try from 01c7a4c4 to 01d7a4db has its CatchHandler @ 01c7a57c */
      lVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
                    /* try { // try from 01c7a4dc to 01d7a573 has its CatchHandler @ 01c7a44c */
      FUN_0391fe00(lVar3,*(undefined8 *)StringLiteral_320,0);
      if (lVar3 == 0) goto LAB_01c7a554;
      lVar3 = FUN_01ed7044(lVar3,*(undefined8 *)StringLiteral_317);
    }
    if ((lVar3 == 0) || (lVar3 = FUN_0391c2b8(lVar3,0), lVar3 == 0)) {
LAB_01c7a554:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar1 = FUN_01ed7044(lVar3,*(undefined8 *)StringLiteral_318);
    **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
    thunk_FUN_01b4f09c(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  }
  return **(undefined8 **)(*unaff_x20 + 0xb8);
}


