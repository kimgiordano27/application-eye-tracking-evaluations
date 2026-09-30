/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05830eec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current(void)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x26;
  code *pcVar12;
  long unaff_x29;
  
  plVar5 = (long *)thunk_FUN_040d6b00();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if (*plVar5 == 0) {
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    FUN_04077674(lVar6,1);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc(*(long *)(unaff_x20 + 0x20));
    }
    FUN_03b2820c();
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    plVar5 = (long *)thunk_FUN_040d6b00();
    lVar11 = *(long *)(unaff_x20 + 0x20);
    lVar6 = *plVar5;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_040b1acc();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x28)) {
      unaff_x23 = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x21,unaff_x23,unaff_x22);
    if (lVar6 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor;
    if (*(int *)(lVar6 + 0x18) != 0) {
      memmove((void *)(lVar6 + 0x20),unaff_x23,unaff_x22);
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_040b1acc();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_040b1acc();
      }
      if (*(int *)(lVar6 + 0x18) != 0) {
        lVar6 = lVar6 + 0x20;
        goto LAB_0583121c;
      }
    }
  }
  else {
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
                    /* try { // try from 05830f20 to 05930f23 has its CatchHandler @ 05830f24 */
    puVar7 = (undefined4 *)thunk_FUN_040d6b00();
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05830f20 with catch @ 05830f24
                       try { // try from 05830f24 to 05930f47 has its CatchHandler @ 05830dcc */
    lVar11 = *(long *)(unaff_x20 + 0x20);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05830e2c with catch @ 05830f28
                        */
    uVar1 = *puVar7;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05830e60 with catch @ 05830f2c
                        */
    uVar3 = *(ushort *)(lVar11 + 0x135);
    lVar6 = lVar11;
    if ((uVar3 & 1) == 0) {
      lVar11 = FUN_040b1acc(lVar11);
                    /* try { // try from 05830f48 to 05930f4b has its CatchHandler @ 05830f54 */
      uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x60);
    if ((uVar3 & 1) == 0) {
      FUN_040b1acc(lVar6);
    }
    uVar8 = thunk_FUN_040d6b00();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    (*pcVar12)(uVar8,uVar1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x60));
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar9 = (undefined8 *)thunk_FUN_040d6b00();
    plVar5 = (long *)*puVar9;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    piVar10 = (int *)thunk_FUN_040d6b00();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    iVar2 = *piVar10;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      unaff_x23 = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x21,unaff_x23,unaff_x22);
    if (plVar5 == (long *)0x0) {
System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor:
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto LAB_05831370;
    }
    uVar4 = iVar2 - 1;
    if (uVar4 < *(uint *)(plVar5 + 3)) {
      memmove((void *)((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * (long)(int)uVar4 + 0x20),
              unaff_x23,unaff_x22);
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      lVar11 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_040b1acc();
      }
      if (uVar4 < *(uint *)(plVar5 + 3)) {
        lVar6 = (long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * (long)(int)uVar4 + 0x20;
LAB_0583121c:
        FUN_04077538(lVar11,lVar6);
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        puVar7 = (undefined4 *)thunk_FUN_040d6b00();
        uVar1 = *puVar7;
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        thunk_FUN_040d6b00();
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        FUN_03b2ebac();
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return uVar1;
        }
        goto LAB_05831370;
      }
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_05831370:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


