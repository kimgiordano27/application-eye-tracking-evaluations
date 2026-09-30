/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 05669c5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasInputFocus(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  uint in_w8;
  uint in_w9;
  long *unaff_x19;
  long unaff_x22;
  long in_stack_00000088;
  
  if (in_w9 != in_w8) {
    *(uint *)(unaff_x19 + 8) = in_w9;
    in_w8 = in_w9;
  }
  *(uint *)(unaff_x19 + 8) = in_w8 & 0xffffff7f;
  iVar2 = FUN_0566ba58();
  *(int *)(unaff_x19 + 0x18) = iVar2;
  puVar1 = PTR_DAT_06a0e888;
  if (iVar2 == 0) {
    *(undefined1 *)((long)unaff_x19 + 0x21) = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
LAB_05669ee8:
      if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_05669efc;
    }
    FUN_05685f0c();
    *(undefined1 *)(unaff_x19 + 4) = 0;
    *(undefined4 *)(unaff_x19 + 0x34) = 1;
    *(undefined4 *)(unaff_x19 + 0x37) = 1;
    FUN_0566bb30();
    FUN_0566bc4c();
    if (*(char *)((long)unaff_x19 + 0x2d1) == '\0') {
      FUN_0566bddc();
    }
    else {
      FUN_0566bc78();
    }
    FUN_0566be90();
    (**(code **)(*unaff_x19 + 0x1b8))();
    if (((*(uint *)(unaff_x19 + 0x57) & 0xfffffffe) == 4) &&
       (uVar4 = FUN_0566beec(), (uVar4 & 1) != 0)) {
      lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Collections_Generic_List<ERLocalGrid>_TypeInfo);
      FUN_0567a65c();
      unaff_x19[0x2a] = lVar3;
      LeanTween__value(unaff_x19 + 0x2a,lVar3);
      unaff_x19[0x2b] = lVar3;
      plVar5 = unaff_x19 + 0x2b;
    }
    else {
      lVar3 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Generic_List<ERLaneData>_TypeInfo
                                );
      thunk_FUN_0567a43c();
      plVar5 = unaff_x19 + 0x2a;
      unaff_x19[0x2a] = lVar3;
    }
    LeanTween__value(plVar5,lVar3);
    if ((*(uint *)(unaff_x19 + 0x57) & 0xfffffffe) == 4) {
      uVar4 = FUN_0566beec();
      if ((uVar4 & 1) == 0) {
        if ((char)unaff_x19[0x16] == '\0') {
          lVar3 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Generic_List<ERMesh>_TypeInfo
                                    );
          FUN_0565ca50();
        }
        else {
          lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                      System_Collections_Generic_List<ERMaterial>_TypeInfo);
          FUN_0565d544();
        }
      }
      else {
        if ((char)unaff_x19[0x16] == '\0') {
          lVar3 = *(long *)(*(long *)puVar1 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02dcfd18();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02dcfd18();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_05669ee8;
          if (*(char *)(lVar3 + 0x130) == '\0') {
            lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                        System_Collections_Generic_List<ERRoad>_TypeInfo);
            FUN_0565ccb8();
            goto LAB_05669ed4;
          }
        }
        lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                    System_Collections_Generic_List<ERModularRoad>_TypeInfo);
        FUN_0565d75c();
      }
LAB_05669ed4:
      unaff_x19[0x33] = lVar3;
      LeanTween__value(unaff_x19 + 0x33,lVar3);
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x58) = 2;
    }
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
    return;
  }
LAB_05669efc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


