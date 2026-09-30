/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRLocatable.TrackingSpacePose>$$MoveNext
ENTRY_POINT: 0474a0ac
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0474a4c0) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRLocatable_TrackingSpacePose>__MoveNext
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 in_w8;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  *(undefined1 *)(unaff_x23 + 0x87b) = in_w8;
  uVar5 = 0;
  if (unaff_x21 != (long *)0x0) {
    uVar5 = unaff_x20;
  }
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  if (unaff_x21 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0474a138;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_0474a138:
    uVar3 = (*(code *)*puVar4)();
    unaff_x20 = uVar5;
  }
  FUN_04749fc0(unaff_x20,uVar3);
  puVar2 = PTR_DAT_065c89e8;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(1,0);
  }
  uVar5 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar2);
  }
  uVar11 = FUN_04f3fb68(uVar11,0);
  uVar9 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = unaff_x21[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      lVar8 = lVar7 + 0x40;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        if (-1 < *(int *)(lVar8 + -0x20)) {
          FUN_0474b5a4();
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x28;
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02ce0978(lVar7);
  }
  lVar8 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto 
        System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__get_Current
        ;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c();

  System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__get_Current
  :
  plVar6 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_065c8d08;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0474a350;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar2,0);
LAB_0474a350:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0474a3c8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar7,0);
LAB_0474a3c8:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
    uStack0000000000000048 = in_stack_00000008;
    uStack0000000000000040 = in_stack_00000000;
    uStack0000000000000050 = in_stack_00000010;
    FUN_0474b5a4();
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto 
          System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__MoveNextRare
          ;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065c8a48,0);

    System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__MoveNextRare
    :
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


