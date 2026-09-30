/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 032002a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int iVar4;
  uint uVar5;
  ulong unaff_x21;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
                    /* try { // try from 032002a4 to 033002b3 has its CatchHandler @ 032002b4 */
  lVar6 = 0x20;
  do {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_03200444;
                    /* catch() { ... } // from try @ 032001cc with catch @ 032002b4
                       catch() { ... } // from try @ 03200204 with catch @ 032002b4
                       catch() { ... } // from try @ 03200230 with catch @ 032002b4
                       catch() { ... } // from try @ 032002a4 with catch @ 032002b4 */
                    /* try { // try from 032002b8 to 033002bb has its CatchHandler @ 032002c4 */
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_03200448;
                    /* try { // try from 032002bc to 033002c7 has its CatchHandler @ 03200120 */
    puVar1 = (undefined8 *)(lVar3 + lVar6);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032002b8 with catch @ 032002c4
                        */
    if (unaff_x20 == 0) goto LAB_03200444;
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = *(undefined4 *)(puVar1 + 2);
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
      break;
    }
    uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x21 = unaff_x21 + 1;
    lVar6 = lVar6 + 0x14;
  } while ((long)unaff_x21 < (long)uVar2);
  if ((int)uVar2 <= (int)unaff_x21) {
    return 0;
  }
  uVar8 = unaff_x21 & 0xffffffff;
  do {
    unaff_x21 = (ulong)((int)unaff_x21 + 1);
    do {
      iVar4 = (int)unaff_x21;
      uVar7 = (uint)uVar8;
      if ((int)uVar2 <= iVar4) {
        *(uint *)(unaff_x19 + 0x18) = uVar7;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)uVar2 - uVar7;
      }
      lVar6 = (long)iVar4 * 0x14 + 0x20;
      unaff_x21 = (ulong)iVar4;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_03200444;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x21) goto LAB_03200448;
        puVar1 = (undefined8 *)(lVar3 + lVar6);
        if (unaff_x20 == 0) goto LAB_03200444;
        in_stack_00000040 = *puVar1;
        in_stack_00000048 = puVar1[1];
        in_stack_00000050 = *(undefined4 *)(puVar1 + 2);
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar2 & 1) == 0) {
          uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x21 = unaff_x21 + 1;
        lVar6 = lVar6 + 0x14;
      } while ((long)unaff_x21 < (long)uVar2);
      uVar5 = (uint)unaff_x21;
    } while ((int)uVar2 <= (int)uVar5);
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) {
LAB_03200444:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_03200448:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar3 = lVar6 + (long)(int)uVar5 * 0x14;
    uVar10 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_03200448;
    lVar6 = lVar6 + (long)(int)uVar7 * 0x14;
    uVar8 = (ulong)(uVar7 + 1);
    *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar6 + 0x28) = uVar10;
    *(undefined8 *)(lVar6 + 0x20) = uVar9;
    uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
}


