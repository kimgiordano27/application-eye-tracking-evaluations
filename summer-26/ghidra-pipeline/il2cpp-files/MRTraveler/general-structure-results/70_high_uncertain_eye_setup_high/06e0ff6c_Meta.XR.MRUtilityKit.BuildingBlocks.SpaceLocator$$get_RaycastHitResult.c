/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$get_RaycastHitResult
ENTRY_POINT: 06e0ff6c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_RaycastHitResult
          (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  int *piVar9;
  int *in_x10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long lVar10;
  long unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x28;
  undefined8 in_stack_00000008;
  
code_r0x06e0ff6c:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR)
  goto Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_OnSpaceLocateCompleted;
LAB_06e0ff74:
  puVar3 = (undefined8 *)FUN_03cf1348(unaff_x26,param_3,3);
LAB_06e0ff94:
  uVar4 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
  uVar5 = (**(code **)(*unaff_x22 + 0x1a8))();
  if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e76e18);
  }
  uVar4 = FUN_06e0e58c(uVar4,unaff_x28,uVar5);
  lVar7 = *unaff_x26;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x19) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_06e1004c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,5);
LAB_06e1004c:
  (*(code *)*puVar3)(unaff_x26,in_stack_00000008,uVar4,puVar3[1]);
  do {
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x25 + 0x18) <= (long)unaff_x23) {
      if (unaff_x21 == (long *)0x0) goto LAB_06e101c0;
      uVar4 = (**(code **)(*unaff_x21 + 0x908))();
      uVar5 = *(undefined8 *)PTR_DAT_08e92cd0;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
      }
      uVar5 = FUN_0710fcf0(uVar5,0);
      uVar8 = FUN_04611b74(uVar4,uVar5,*(undefined8 *)PTR_DAT_08e92418);
      puVar2 = PTR_DAT_08e92cd8;
      if ((uVar8 & 1) == 0) {
        return in_stack_00000008;
      }
      lVar7 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)PTR_DAT_08e92cd8);
      if (lVar7 == 0) goto LAB_06e101c0;
      lVar10 = *(long *)puVar2;
      plVar6 = (long *)thunk_FUN_03cf5138(in_stack_00000008,lVar10);
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_06e10138;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_06e10120;
    }
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x23) goto LAB_06e101bc;
    if (unaff_x24 == 0) goto LAB_06e101c0;
    uVar4 = *(undefined8 *)(unaff_x25 + unaff_x23 * 8 + 0x20);
    uVar8 = FUN_06a4e574();
    if ((uVar8 & 1) == 0) {
      lVar7 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
      if (lVar7 == 0) goto LAB_06e101c0;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
      thunk_FUN_03d233cc();
      if (unaff_x21 == (long *)0x0) goto LAB_06e101c0;
      uVar5 = (**(code **)(*unaff_x21 + 0x308))();
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x28) = uVar5;
      thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x28),uVar5);
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_08e92d00;
      thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x30));
      if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x38) = uVar4;
      thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x38),uVar4);
      if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_08e92cf0;
      thunk_FUN_03d233cc();
    }
    else {
      unaff_x26 = (long *)FUN_06a4e300();
      if (unaff_x26 == (long *)0x0) goto LAB_06e101c0;
      lVar7 = *unaff_x26;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x19) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_06e0fcc4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,2);
LAB_06e0fcc4:
      uVar8 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
      if ((uVar8 & 1) != 0) break;
      lVar7 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,7);
      if (lVar7 == 0) goto LAB_06e101c0;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_06e101bc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
      thunk_FUN_03d233cc();
      if (unaff_x21 == (long *)0x0) goto LAB_06e101c0;
      uVar5 = (**(code **)(*unaff_x21 + 0x308))();
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x28) = uVar5;
      thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x28),uVar5);
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_08e92d18;
      thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x30));
      if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x38) = uVar4;
      thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x38),uVar4);
      if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_08e92d08;
      thunk_FUN_03d233cc();
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e92ce8 + 0x130);
      if (*(byte *)(*unaff_x26 + 0x130) < bVar1) {
        unaff_x26 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar1 * 8 + -8) !=
               *(long *)PTR_DAT_08e92ce8) {
        unaff_x26 = (long *)0x0;
      }
      puVar3 = (undefined8 *)PTR_DAT_08e92d10;
      if (unaff_x26 != (long *)0x0) {
        puVar3 = (undefined8 *)PTR_DAT_08e79288;
      }
      if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x48) = *puVar3;
      thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x48));
      if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_06e101bc;
      *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)PTR_DAT_08e71968;
      thunk_FUN_03d233cc();
    }
    FUN_06f74f38(lVar7,0);
    if (unaff_x20 == 0) goto LAB_06e101c0;
    FUN_06f84868();
  } while( true );
  lVar7 = *unaff_x26;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x19) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_06e0fec8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,1);
LAB_06e0fec8:
  uVar8 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
  if ((uVar8 & 1) == 0) {
    unaff_x28 = 0;
  }
  else {
    lVar7 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x19) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_06e0ff30;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,4);
LAB_06e0ff30:
    unaff_x28 = (*(code *)*puVar3)(unaff_x26,in_stack_00000008,puVar3[1]);
  }
  param_1 = *unaff_x26;
  param_3 = *unaff_x19;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 == 0) goto LAB_06e0ff74;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_OnSpaceLocateCompleted:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    goto code_r0x06e0ff6c;
  }
  puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138);
  goto LAB_06e0ff94;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_06e10120:
    if (*(long *)(piVar9 + -2) == lVar10) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06e10158;
    }
  }
LAB_06e10138:
  puVar3 = (undefined8 *)FUN_03cf1348(plVar6,lVar10,0);
LAB_06e10158:
  uVar8 = (*(code *)*puVar3)(plVar6);
  if ((uVar8 & 1) == 0) {
    FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e92cf8);
    if (unaff_x20 == 0) {
LAB_06e101c0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06f84868();
  }
  return in_stack_00000008;
}


