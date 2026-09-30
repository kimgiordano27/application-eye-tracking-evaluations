/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 03d51310
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03d51760) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__MoveNext(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *plVar9;
  int iVar10;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_032934b8(param_1);
  }
  FUN_02d9fe48();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  piVar3 = (int *)thunk_FUN_032cddd4();
  iVar10 = *piVar3;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  if (1 < iVar10) {
    piVar3 = (int *)thunk_FUN_032cddd4();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    iVar10 = *piVar3;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    FUN_032d5d3c(lVar4,iVar10 + -1);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8(*(long *)(unaff_x19 + 0x20));
    }
  }
  FUN_02da0a44();
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  lVar7 = *unaff_x24;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_03d51480;
      }
      uVar8 = uVar8 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_032937ac();
LAB_03d51480:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_0727a180;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar10 = 0;
  do {
    lVar4 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar3 * 0x10 + 0x138);
          goto FUN_03d514ec;
        }
        uVar8 = uVar8 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar2,0);
FUN_03d514ec:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_03d51714;
      lVar4 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 == 0)
      goto 
      System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current;
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8(lVar4);
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar4) {
          lVar4 = lVar7 + (long)*piVar3 * 0x10 + 0x138;
          goto LAB_03d51570;
        }
        uVar8 = uVar8 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar8 != 0);
    }
    lVar4 = FUN_032937ac(plVar6,lVar4,0);
LAB_03d51570:
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar6,unaff_x29 + -0x10);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (iVar10 == 0) {
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      FUN_032d5cbc();
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      puVar5 = (undefined8 *)thunk_FUN_032cddd4();
      plVar9 = (long *)*puVar5;
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar1 = iVar10 - 1;
      if (*(uint *)(plVar9 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar1 + 0x20),
             unaff_x22,unaff_x21);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8();
      }
      if (*(uint *)(plVar9 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      FUN_032d5c5c(lVar4,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar1 + 0x20)
      ;
    }
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar3 = piVar3 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_03d51708;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current:
  puVar5 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_07279f60,0);
LAB_03d51708:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_03d51714:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


