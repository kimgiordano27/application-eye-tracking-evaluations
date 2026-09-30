/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0419fd68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int in_w8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  
  do {
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    if ((long)unaff_x22 < (long)in_w8) goto LAB_0419fd30;
    do {
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < in_w8) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_0419fe00;
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21))
        goto LAB_0419fe04;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x10);
        puVar3 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
        uVar7 = *puVar3;
        unaff_w21 = unaff_w21 + 1;
        puVar1[1] = puVar3[1];
        *puVar1 = uVar7;
        LeanTween__value(puVar1,0);
        in_w8 = *(int *)(unaff_x19 + 0x18);
        unaff_x22 = (ulong)(uVar6 + 1);
      }
      if (in_w8 <= (int)unaff_x22) {
        FUN_0550afb4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,in_w8 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
LAB_0419fd30:
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) {
LAB_0419fe00:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) {
LAB_0419fe04:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (unaff_x20 == 0) goto LAB_0419fe00;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + unaff_x23 + 0x20)
                         ,*(undefined8 *)(lVar5 + unaff_x23 + 0x28),
                         *(undefined8 *)(unaff_x20 + 0x28));
      in_w8 = *(int *)(unaff_x19 + 0x18);
    } while ((uVar4 & 1) == 0);
  } while( true );
}


