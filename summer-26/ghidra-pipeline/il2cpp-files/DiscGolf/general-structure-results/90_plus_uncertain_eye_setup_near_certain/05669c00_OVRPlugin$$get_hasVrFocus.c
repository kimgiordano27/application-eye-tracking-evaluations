/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 05669c00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long *unaff_x19;
  long unaff_x22;
  long in_stack_00000088;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0569f670(unaff_x19 + 8,0);
  *(byte *)((long)unaff_x19 + 0x21) = *(byte *)(unaff_x19 + 8) >> 5 & 1;
  FUN_0566b6dc();
  uVar7 = *(uint *)(unaff_x19 + 8);
  if (((int)unaff_x19[0x57] == 4) && (uVar1 = uVar7 | 4, uVar1 != uVar7)) {
    *(uint *)(unaff_x19 + 8) = uVar1;
    uVar7 = uVar1;
  }
  if (((uVar7 >> 1 & 1) != 0) && (uVar1 = uVar7 | 4, uVar1 != uVar7)) {
    *(uint *)(unaff_x19 + 8) = uVar1;
    uVar7 = uVar1;
  }
  *(uint *)(unaff_x19 + 8) = uVar7 & 0xffffff7f;
  iVar3 = FUN_0566ba58();
  *(int *)(unaff_x19 + 0x18) = iVar3;
  puVar2 = PTR_DAT_06a0e888;
  if (iVar3 == 0) {
    *(undefined1 *)((long)unaff_x19 + 0x21) = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
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
       (uVar5 = FUN_0566beec(), (uVar5 & 1) != 0)) {
      lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Collections_Generic_List<ERLocalGrid>_TypeInfo);
      FUN_0567a65c();
      unaff_x19[0x2a] = lVar4;
      LeanTween__value(unaff_x19 + 0x2a,lVar4);
      unaff_x19[0x2b] = lVar4;
      plVar6 = unaff_x19 + 0x2b;
    }
    else {
      lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Generic_List<ERLaneData>_TypeInfo
                                );
      thunk_FUN_0567a43c();
      plVar6 = unaff_x19 + 0x2a;
      unaff_x19[0x2a] = lVar4;
    }
    LeanTween__value(plVar6,lVar4);
    if ((*(uint *)(unaff_x19 + 0x57) & 0xfffffffe) == 4) {
      uVar5 = FUN_0566beec();
      if ((uVar5 & 1) == 0) {
        if ((char)unaff_x19[0x16] == '\0') {
          lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Generic_List<ERMesh>_TypeInfo
                                    );
          FUN_0565ca50();
        }
        else {
          lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                      System_Collections_Generic_List<ERMaterial>_TypeInfo);
          FUN_0565d544();
        }
      }
      else {
        if ((char)unaff_x19[0x16] == '\0') {
          lVar4 = *(long *)(*(long *)puVar2 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02dcfd18();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02dcfd18();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar4 == 0) goto LAB_05669ee8;
          if (*(char *)(lVar4 + 0x130) == '\0') {
            lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                        System_Collections_Generic_List<ERRoad>_TypeInfo);
            FUN_0565ccb8();
            goto LAB_05669ed4;
          }
        }
        lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                    System_Collections_Generic_List<ERModularRoad>_TypeInfo);
        FUN_0565d75c();
      }
LAB_05669ed4:
      unaff_x19[0x33] = lVar4;
      LeanTween__value(unaff_x19 + 0x33,lVar4);
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


