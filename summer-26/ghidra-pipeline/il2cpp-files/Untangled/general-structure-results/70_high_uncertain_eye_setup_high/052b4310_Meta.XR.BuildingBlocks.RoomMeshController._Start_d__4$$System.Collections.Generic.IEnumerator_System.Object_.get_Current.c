/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
ENTRY_POINT: 052b4310
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x21;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x24;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  long in_stack_00000008;
  
  plVar2 = (long *)(unaff_x20 + 0x98);
  *plVar2 = 0;
  thunk_FUN_02f411dc(plVar2,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0)
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x98);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0)
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      *unaff_x21 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x98);
      thunk_FUN_02f411dc();
      if (*unaff_x21 == 0)
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      uVar3 = *(undefined8 *)(*unaff_x21 + 0xe0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar1 = FUN_066cd30c(uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (*unaff_x21 == 0)
        goto 
        Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
        ;
        *unaff_x21 = *(long *)(*unaff_x21 + 0xe0);
        thunk_FUN_02f411dc();
      }
    }
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x48) == 0)
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x98);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x48) == 0)
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      *plVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x98);
      thunk_FUN_02f411dc(plVar2);
      if (*plVar2 == 0)
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      uVar3 = *(undefined8 *)(*plVar2 + 0xe0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar1 = FUN_066cd30c(uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (*plVar2 == 0)
        goto 
        Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
        ;
        *plVar2 = *(long *)(*plVar2 + 0xe0);
        thunk_FUN_02f411dc(plVar2);
      }
    }
  }
  lVar4 = *unaff_x21;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar4,0);
  if ((uVar1 & 1) != 0) {
    if (*unaff_x21 == 0)
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    uVar1 = FUN_037f26f8(*unaff_x21,&stack0x00000008,*(undefined8 *)PTR_DAT_06d3d1f0);
    if ((uVar1 & 1) != 0) {
      if (in_stack_00000008 == 0)
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      if (*(int *)(in_stack_00000008 + 0x20) == 2) {
        if (*unaff_x21 == 0)
        goto 
        Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
        ;
        FUN_05291248(*unaff_x21,0);
        *unaff_x21 = 0;
        thunk_FUN_02f411dc();
      }
    }
  }
  lVar4 = *plVar2;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar4,0);
  if ((uVar1 & 1) != 0) {
    lVar4 = *plVar2;
    lVar5 = *unaff_x21;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066c971c(lVar4,lVar5,0);
    if ((uVar1 & 1) != 0) {
      if (*plVar2 == 0)
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      uVar1 = FUN_037f26f8(*plVar2,&stack0x00000008,*(undefined8 *)PTR_DAT_06d3d1f0);
      if ((uVar1 & 1) != 0) {
        if (in_stack_00000008 == 0)
        goto 
        Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
        ;
        if (*(int *)(in_stack_00000008 + 0x20) == 2) {
          if (*plVar2 == 0)
          goto 
          Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
          ;
          FUN_05291248(*plVar2,0);
          *plVar2 = 0;
          thunk_FUN_02f411dc(plVar2,0);
        }
      }
    }
  }
  lVar4 = *unaff_x21;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar4,0);
  if ((uVar1 & 1) != 0) {
    if (*unaff_x21 == 0)
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    uVar3 = *(undefined8 *)(*unaff_x21 + 0xa8);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if ((*unaff_x21 == 0) || (lVar4 = *(long *)(*unaff_x21 + 0xa8), lVar4 == 0))
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      FUN_06741ea8(lVar4,0,0);
    }
  }
  lVar4 = *plVar2;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar4,0);
  if ((uVar1 & 1) != 0) {
    if (*plVar2 == 0)
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    uVar3 = *(undefined8 *)(*plVar2 + 0xa8);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if ((*plVar2 == 0) || (lVar4 = *(long *)(*plVar2 + 0xa8), lVar4 == 0))
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      FUN_06741ea8(lVar4,0,0);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0)
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x38) + 0x2f1) = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x48) == 0)
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x48) + 0x2f1) = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x90), lVar4 == 0))
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    FUN_06741ea8(lVar4,0,0);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x50) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x90), lVar4 == 0)) {
Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06741ea8(lVar4,0,0);
  }
  *(undefined4 *)(unaff_x19 + 0xb8) = unaff_s10;
  *(undefined4 *)(unaff_x19 + 0xbc) = unaff_s9;
  *(undefined4 *)(unaff_x19 + 0xc0) = unaff_s8;
  return;
}


