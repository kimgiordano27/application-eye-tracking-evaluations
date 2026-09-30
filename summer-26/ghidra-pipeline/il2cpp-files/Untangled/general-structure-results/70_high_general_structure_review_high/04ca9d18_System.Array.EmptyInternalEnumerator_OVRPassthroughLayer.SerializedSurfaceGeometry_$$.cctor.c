/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor
ENTRY_POINT: 04ca9d18
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___cctor
          (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  uint uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined8 unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
code_r0x04ca9d18:
  param_2 = FUN_02eea768(param_2);
LAB_04ca9d24:
  uVar9 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x20;
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 04ca9d2c to 04da9d5f has its CatchHandler @ 04ca9a0c */
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_2) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04ca9db4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c(unaff_x23,param_2,0);
LAB_04ca9db4:
                    /* try { // try from 04ca9db4 to 04da9dcb has its CatchHandler @ 04ca9e00 */
  uVar4 = (*(code *)*puVar2)(unaff_x23,unaff_x24);
  uVar6 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_04ca9ec4;
        if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x25 * 0x28 + 0x24) + 1;
          goto LAB_04ca9e78;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_04ca9ec4;
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar8 * 0x28 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x28 + 0x24);
LAB_04ca9e78:
          lVar5 = unaff_x27 + unaff_x25 * 0x28;
          uVar11 = *(undefined8 *)(lVar5 + 0x38);
          uVar10 = *(undefined8 *)(lVar5 + 0x30);
          in_stack_00000010[2] = *(undefined8 *)(lVar5 + 0x40);
          in_stack_00000010[1] = uVar11;
          *in_stack_00000010 = uVar10;
          *unaff_x29 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined4 *)(lVar5 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_04ca9ec8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    do {
                    /* try { // try from 04ca9dcc to 04da9def has its CatchHandler @ 04ca9a0c */
      uVar9 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar9;
      unaff_x20 = uVar6 & 0xffffffff;
      uVar8 = (uint)uVar6;
      if ((int)uVar9 < 0) {
        *in_stack_00000010 = 0;
        in_stack_00000010[1] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_04ca9ec4;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_04ca9ec8;
      unaff_x29 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar6 = unaff_x25;
    } while (*unaff_x29 != unaff_w28);
    unaff_x23 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x23 != (long *)0x0) break;
                    /* try { // try from 04ca9d78 to 04da9d87 has its CatchHandler @ 04ca9a0c */
    plVar3 = (long *)FUN_03378db8(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_04ca9ec4;
                    /* try { // try from 04ca9d88 to 04da9d8b has its CatchHandler @ 04ca9d8c */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 04ca9d88 with catch @ 04ca9d8c
                       try { // try from 04ca9d8c to 04da9db3 has its CatchHandler @ 04ca9a0c */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 04ca9cc8 with catch @ 04ca9d90
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 04ca9d60 with catch @ 04ca9d94
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 04ca9ce8 with catch @ 04ca9d98
                        */
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined8 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28));
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 04ca9d64 with catch @ 04ca9d9c
                        */
  } while( true );
  if (unaff_x23 == (long *)0x0) {
LAB_04ca9ec4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
  unaff_x24 = *(undefined8 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28);
  unaff_x26 = unaff_x25;
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) goto code_r0x04ca9d18;
  goto LAB_04ca9d24;
}


