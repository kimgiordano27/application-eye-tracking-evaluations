/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03cb3cc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(6,0);
  }
                    /* try { // try from 03cb3cd8 to 03db3cdb has its CatchHandler @ 03cb3cfc */
                    /* try { // try from 03cb3cdc to 03db3cdf has its CatchHandler @ 03cb3cf8 */
                    /* try { // try from 03cb3ce0 to 03db3ce7 has its CatchHandler @ 03cb3d04 */
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                    /* try { // try from 03cb3ce8 to 03db3d27 has its CatchHandler @ 03cb39c8 */
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb3be0 with catch @ 03cb3cf4
                        */
    FUN_02f41e9c(lVar5);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb3cdc with catch @ 03cb3cf8
                        */
  }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb3cd8 with catch @ 03cb3cfc
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb3c4c with catch @ 03cb3d00
                        */
  plVar2 = (long *)thunk_FUN_02f45174();
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb3ce0 with catch @ 03cb3d04
                        */
  if (plVar2 == (long *)0x0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    FUN_03cb63e0();
    return;
  }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb3af4 with catch @ 03cb3d08
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb3b40 with catch @ 03cb3d0c
                        */
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 03cb3d28 to 03db3d2b has its CatchHandler @ 03cb3d34 */
    lVar5 = FUN_02f41e9c(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03cb3df0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0(plVar2,lVar5,0);
LAB_03cb3df0:
  iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    uVar4 = FUN_02f0880c(lVar5,iVar1);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_03cb3eec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar2,lVar5,5);
LAB_03cb3eec:
    (*(code *)*puVar3)(plVar2,uVar4,0,puVar3[1]);
    *(int *)(unaff_x19 + 0x18) = iVar1;
  }
  return;
}


