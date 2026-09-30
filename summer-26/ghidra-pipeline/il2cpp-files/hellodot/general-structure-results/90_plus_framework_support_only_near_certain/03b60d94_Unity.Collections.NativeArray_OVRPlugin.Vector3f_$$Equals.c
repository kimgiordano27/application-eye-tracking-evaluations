/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 03b60d94
PROGRAM: hellodot-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03b60f08) */
/* WARNING: Removing unreachable block (ram,0x03b60f04) */
/* WARNING: Removing unreachable block (ram,0x03b60f50) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x25;
  
code_r0x03b60d94:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_03b60d88;
LAB_03b60da0:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
  do {
    uVar2 = (*(code *)*puVar1)();
                    /* catch() { ... } // from try @ 03b60d38 with catch @ 03b60dc8
                       catch() { ... } // from try @ 03b60db8 with catch @ 03b60dc8 */
    if ((uVar2 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_03b60ef8;
      lVar3 = *unaff_x23;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_03b60ed0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 03b60dcc to 03c60dcf has its CatchHandler @ 03b60dd8 */
                    /* try { // try from 03b60dd0 to 03c60ddb has its CatchHandler @ 03b60c60 */
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03b60dcc with catch @ 03b60dd8
                        */
                    /* try { // try from 03b60ddc to 03c610df has its CatchHandler @ 03b60ddc
                       catch() { ... } // from try @ 03b60ddc with catch @ 03b60ddc
                       catch() { ... } // from try @ 03b611ac with catch @ 03b60ddc
                       catch() { ... } // from try @ 03b61274 with catch @ 03b60ddc
                       catch() { ... } // from try @ 03b61320 with catch @ 03b60ddc */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978(lVar3);
    }
    lVar4 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals:
    (*(code *)*puVar1)(&stack0x00000160);
    memcpy(&stack0x00000000,&stack0x00000160,0x160);
    memcpy(&stack0x00000160,&stack0x00000000,0x160);
    FUN_03b607f0();
    param_1 = *unaff_x23;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_03b60da0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03b60d88:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x03b60d94;
                    /* try { // try from 03b60db8 to 03c60dc7 has its CatchHandler @ 03b60dc8 */
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03b60eec;
    }
  }
LAB_03b60ed0:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b60eec:
  (*(code *)*puVar1)();
LAB_03b60ef8:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


