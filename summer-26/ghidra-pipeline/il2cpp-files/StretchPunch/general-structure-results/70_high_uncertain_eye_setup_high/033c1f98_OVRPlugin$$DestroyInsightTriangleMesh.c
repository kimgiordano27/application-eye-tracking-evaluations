/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightTriangleMesh
ENTRY_POINT: 033c1f98
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__DestroyInsightTriangleMesh(void)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 in_w8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  
  *(undefined1 *)(unaff_x21 + 0x9a1) = in_w8;
                    /* try { // try from 033c1f9c to 034c1fb3 has its CatchHandler @ 033c20a4 */
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x598))();
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if ((uVar5 & 1) != 0) {
    return false;
  }
                    /* try { // try from 033c1fc4 to 034c1fd3 has its CatchHandler @ 033c2094 */
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar3 = FUN_033acf6c();
                    /* try { // try from 033c1fe8 to 034c1fff has its CatchHandler @ 033c2084 */
  uVar4 = FUN_033acf6c();
                    /* try { // try from 033c2000 to 034c2007 has its CatchHandler @ 033c2080 */
                    /* try { // try from 033c200c to 034c201f has its CatchHandler @ 033c2088 */
  if ((uVar3 == uVar4) && (uVar5 = FUN_033ac7d8(), (uVar5 & 1) != 0)) {
    return true;
  }
                    /* try { // try from 033c2020 to 034c2077 has its CatchHandler @ 033c1e48 */
  switch(uVar4) {
  case 4:
    if (uVar3 == 6) {
      return true;
    }
    return uVar3 == 8;
  default:
    uVar6 = *(undefined8 *)StringLiteral_2161;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar6,0);
    uVar5 = FUN_033aa3b4();
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)StringLiteral_2163;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033a87c8(uVar6,0);
      uVar5 = FUN_033aa3b4();
      if ((uVar5 & 1) == 0) {
        return false;
      }
    }
    if (*(int *)(*(long *)StringLiteral_1157 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    return unaff_x20 == unaff_x19;
  case 7:
    bVar2 = 1 < uVar3 - 5;
    break;
  case 8:
    return (uVar3 & 0xfffffffd) == 4;
  case 9:
    bVar2 = 4 < uVar3 - 4;
    break;
  case 10:
    if (4 < uVar3 - 4) {
      return false;
    }
    goto LAB_033c2130;
  case 0xb:
    bVar2 = 6 < uVar3 - 4;
    break;
  case 0xc:
    if (6 < uVar3 - 4) {
      return false;
    }
LAB_033c2130:
    return (uVar3 & 1) == 0;
  case 0xd:
    bVar2 = 8 < uVar3 - 4;
    break;
  case 0xe:
    bVar2 = 9 < uVar3 - 4;
  }
  return !bVar2;
}


