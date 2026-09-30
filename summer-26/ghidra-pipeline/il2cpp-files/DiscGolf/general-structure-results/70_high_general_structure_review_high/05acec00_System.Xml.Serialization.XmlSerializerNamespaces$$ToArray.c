/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 05acec00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  long *unaff_x21;
  long lVar11;
  long lVar12;
  long in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000028;
  
  FUN_05ae8504();
                    /* catch() { ... } // from try @ 05acebe0 with catch @ 05acec08
                       try { // try from 05acec08 to 05bcec27 has its CatchHandler @ 05ace308 */
                    /* catch() { ... } // from try @ 05acebdc with catch @ 05acec0c */
                    /* catch() { ... } // from try @ 05acebc4 with catch @ 05acec10 */
  uVar5 = (**(code **)(*unaff_x21 + 0x228))();
                    /* try { // try from 05acec28 to 05bcec3f has its CatchHandler @ 05acec7c */
  *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
  LeanTween__value();
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 05acec40 to 05bcec67 has its CatchHandler @ 05ace308 */
  uVar6 = FUN_05b0eb48(in_stack_00000028,0);
  if ((uVar6 & 1) != 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar7 = (long *)FUN_05b0ea98(in_stack_00000028,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 05acec68 to 05bcec77 has its CatchHandler @ 05acec7c */
    uVar3 = FUN_05489ff8(plVar7,0);
                    /* catch() { ... } // from try @ 05acec28 with catch @ 05acec7c
                       catch() { ... } // from try @ 05acec68 with catch @ 05acec7c */
                    /* try { // try from 05acec80 to 05bcec83 has its CatchHandler @ 05acee70 */
    plVar8 = (long *)FUN_02d966a4(*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_labelElement__
                                  ,uVar3);
    puVar2 = OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo;
    lVar12 = 0x20;
                    /* try { // try from 05acec84 to 05bcec9f has its CatchHandler @ 05ace308 */
                    /* catch() { ... } // from try @ 05aceb88 with catch @ 05acec88 */
                    /* try { // try from 05aceca0 to 05bcecb7 has its CatchHandler @ 05acecf4 */
    for (uVar6 = 0; iVar4 = FUN_05489ff8(plVar7,0), (int)uVar6 < iVar4; uVar6 = uVar6 + 1) {
                    /* try { // try from 05acecb8 to 05bcecdf has its CatchHandler @ 05ace308 */
      plVar9 = (long *)(**(code **)(*plVar7 + 0x308))
                                 (plVar7,uVar6 & 0xffffffff,*(undefined8 *)(*plVar7 + 0x310));
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                    /* try { // try from 05acece0 to 05bcecef has its CatchHandler @ 05acecf4 */
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar9);
        }
      }
      FUN_05ad0054();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = plVar9[0xe];
      if ((lVar11 != 0) &&
         (lVar10 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
        uVar5 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar5,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar8[uVar6 + 4] = lVar11;
      LeanTween__value((long)plVar8 + lVar12,lVar11);
      lVar12 = lVar12 + 8;
    }
    *(long *)(unaff_x20 + 0x98) = (long)plVar8;
    LeanTween__value((long *)(unaff_x20 + 0x98),plVar8);
  }
  *(long *)(unaff_x20 + 0xa0) = in_stack_00000028;
  LeanTween__value();
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(long *)(in_stack_00000028 + 0xe0) = unaff_x20;
  LeanTween__value();
  if (*in_stack_00000010 != 0) {
    *(undefined1 *)(*in_stack_00000010 + 0x30) = 0;
    if (in_stack_00000008 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


