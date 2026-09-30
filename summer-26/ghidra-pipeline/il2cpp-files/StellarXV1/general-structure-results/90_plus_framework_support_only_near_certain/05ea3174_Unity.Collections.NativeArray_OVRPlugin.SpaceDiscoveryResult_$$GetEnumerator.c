/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 05ea3174
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092ba5d8);
  FUN_04077588(PTR_DAT_092ba5e0);
  FUN_04077588(PTR_DAT_092ba5e8);
  *(undefined1 *)(unaff_x20 + 0xa20) = 1;
  puVar2 = PTR_DAT_09285b38;
  plVar7 = (long *)unaff_x19[3];
  if (plVar7 == (long *)0x0) {
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    if (*(char *)((long)unaff_x19 + 0x3a) != '\0') {
      if (unaff_x19[2] != 0) {
        FUN_05212438(*unaff_x19,unaff_x19[1],1,*(undefined8 *)PTR_DAT_092ba5d8);
        return;
      }
      FUN_05212758(*unaff_x19,unaff_x19[1],1,*(undefined8 *)PTR_DAT_092ba5e0);
      return;
    }
    lVar5 = *unaff_x19;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05ea3288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),unaff_x19[1],*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
  else {
                    /* try { // try from 05ea31b0 to 05fa31bf has its CatchHandler @ 05ea31c0 */
    lVar5 = *plVar7;
                    /* catch() { ... } // from try @ 05ea3110 with catch @ 05ea31c0
                       catch() { ... } // from try @ 05ea313c with catch @ 05ea31c0
                       catch() { ... } // from try @ 05ea31b0 with catch @ 05ea31c0 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_092ba5d0 + 0x130);
                    /* try { // try from 05ea31c4 to 05fa31c7 has its CatchHandler @ 05ea31d0 */
                    /* try { // try from 05ea31c8 to 05fa31d3 has its CatchHandler @ 05ea302c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ea31c4 with catch @ 05ea31d0
                        */
                    /* catch() { ... } // from try @ 05ea3264 with catch @ 05ea31d4
                       catch() { ... } // from try @ 05ea32a4 with catch @ 05ea31d4
                       catch() { ... } // from try @ 05ea32dc with catch @ 05ea31d4
                       catch() { ... } // from try @ 05ea3308 with catch @ 05ea31d4
                       catch() { ... } // from try @ 05ea337c with catch @ 05ea31d4 */
    if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092ba5d0)) {
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
      if (lVar5 == 0) {
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_040b1acc();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_040b1acc();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_040b1acc();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_040b1acc();
        }
        uVar4 = **(undefined8 **)(lVar5 + 0xb8);
        lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a4f40);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_040b1acc(lVar6);
        }
        FUN_076ddf8c(lVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x78),0);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_040b1acc();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_040b1acc();
        }
        lVar3 = *(long *)(unaff_x21 + 0x20);
        *(long *)(*(long *)(lVar6 + 0xb8) + 0x18) = lVar5;
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_040b1acc();
        }
        lVar6 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_040b1acc();
        }
        thunk_FUN_040ec700(*(long *)(lVar6 + 0xb8) + 0x18,lVar5);
      }
      uVar4 = FUN_05217a68(*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_092ba5e8);
                    /* WARNING: Could not recover jumptable at 0x05ea3454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x188))(plVar7,lVar5,uVar4,*(undefined8 *)(*plVar7 + 400));
      return;
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_092a4e98 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_092a4e98)) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_09285b38 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0988a8d8 == '\0') {
      FUN_04077588(PTR_DAT_09285b38);
      DAT_0988a8d8 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *(long *)puVar2;
    }
    lVar6 = *unaff_x19;
    lVar3 = unaff_x19[1];
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_09285890 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285890);
    }
    uVar4 = FUN_076de68c(0);
    if (lVar5 != 0) {
      FUN_076fff44(lVar5,lVar6,lVar3,uVar4,8,plVar7,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


