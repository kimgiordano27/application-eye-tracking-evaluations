/*
FUNCTION_NAME: Meta.Conduit.ConduitUtilities.ProgressDelegate$$.ctor
ENTRY_POINT: 0327f70c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0327f890) */
/* WARNING: Removing unreachable block (ram,0x0327f88c) */
/* WARNING: Removing unreachable block (ram,0x0327f8d0) */

void Meta_Conduit_ConduitUtilities_ProgressDelegate___ctor(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 0327f72c to 0337f753 has its CatchHandler @ 0327f768 */
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                    /* try { // try from 0327f760 to 0337f767 has its CatchHandler @ 0327f768 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0327f764;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
                    /* try { // try from 0327f754 to 0337f75f has its CatchHandler @ 0327f400 */
LAB_0327f764:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0327f72c with catch @ 0327f768
                       catch(type#2 @ 00000000) { ... } // from try @ 0327f760 with catch @ 0327f768
                        */
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) break;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0327f7dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0327f7dc:
    (*(code *)*puVar2)();
    FUN_0327f200();
  } while( true );
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto Meta_Conduit_ConduitParameterValue___ctor;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
Meta_Conduit_ConduitParameterValue___ctor:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


