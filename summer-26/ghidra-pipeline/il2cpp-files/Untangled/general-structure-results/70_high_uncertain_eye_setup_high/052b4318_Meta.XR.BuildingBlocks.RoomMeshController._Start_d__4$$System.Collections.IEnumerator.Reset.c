/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 052b4318
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


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_IEnumerator_Reset
               (undefined8 param_1)

{
  ulong uVar1;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x24;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  long in_stack_00000008;
  
  thunk_FUN_02f411dc(param_1,0);
  lVar2 = unaff_x20[-0xc];
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar2,0);
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
      *unaff_x20 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x98);
      thunk_FUN_02f411dc();
      if (*unaff_x20 == 0)
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      uVar3 = *(undefined8 *)(*unaff_x20 + 0xe0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar1 = FUN_066cd30c(uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (*unaff_x20 == 0)
        goto 
        Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
        ;
        *unaff_x20 = *(long *)(*unaff_x20 + 0xe0);
        thunk_FUN_02f411dc();
      }
    }
  }
  lVar2 = *unaff_x21;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar2,0);
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
  lVar2 = *unaff_x20;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *unaff_x20;
    lVar4 = *unaff_x21;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066c971c(lVar2,lVar4,0);
    if ((uVar1 & 1) != 0) {
      if (*unaff_x20 == 0)
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      uVar1 = FUN_037f26f8(*unaff_x20,&stack0x00000008,*(undefined8 *)PTR_DAT_06d3d1f0);
      if ((uVar1 & 1) != 0) {
        if (in_stack_00000008 == 0)
        goto 
        Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
        ;
        if (*(int *)(in_stack_00000008 + 0x20) == 2) {
          if (*unaff_x20 == 0)
          goto 
          Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
          ;
          FUN_05291248(*unaff_x20,0);
          *unaff_x20 = 0;
          thunk_FUN_02f411dc();
        }
      }
    }
  }
  lVar2 = *unaff_x21;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar2,0);
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
      if ((*unaff_x21 == 0) || (lVar2 = *(long *)(*unaff_x21 + 0xa8), lVar2 == 0))
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      FUN_06741ea8(lVar2,0,0);
    }
  }
  lVar2 = *unaff_x20;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*unaff_x20 == 0)
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    uVar3 = *(undefined8 *)(*unaff_x20 + 0xa8);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if ((*unaff_x20 == 0) || (lVar2 = *(long *)(*unaff_x20 + 0xa8), lVar2 == 0))
      goto 
      Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
      ;
      FUN_06741ea8(lVar2,0,0);
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
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x90), lVar2 == 0))
    goto 
    Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset
    ;
    FUN_06741ea8(lVar2,0,0);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x50) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x90), lVar2 == 0)) {
Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_Reset:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06741ea8(lVar2,0,0);
  }
  *(undefined4 *)(unaff_x19 + 0xb8) = unaff_s10;
  *(undefined4 *)(unaff_x19 + 0xbc) = unaff_s9;
  *(undefined4 *)(unaff_x19 + 0xc0) = unaff_s8;
  return;
}


