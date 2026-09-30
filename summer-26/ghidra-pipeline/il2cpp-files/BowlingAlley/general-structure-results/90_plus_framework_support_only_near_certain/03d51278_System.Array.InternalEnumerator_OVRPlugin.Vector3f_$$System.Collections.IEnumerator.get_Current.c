/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03d51278
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

void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (void)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x21;
  undefined1 *__src;
  undefined1 *__s;
  long *unaff_x24;
  size_t unaff_x25;
  code *pcVar10;
  long *plVar11;
  int iVar12;
  long unaff_x29;
  
  __src = &stack0x00000000 + -in_x9;
  __s = __src + -in_x9;
  memset(__s,0,unaff_x21);
  memset(unaff_x20,0,unaff_x25);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar5 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_032934b8(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(lVar5);
  }
  (*pcVar10)();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8(*(long *)(unaff_x19 + 0x20));
  }
  FUN_02d9fe48();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  piVar4 = (int *)thunk_FUN_032cddd4();
  iVar12 = *piVar4;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  if (1 < iVar12) {
    piVar4 = (int *)thunk_FUN_032cddd4();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    iVar12 = *piVar4;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    FUN_032d5d3c(lVar5,iVar12 + -1);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8(*(long *)(unaff_x19 + 0x20));
    }
  }
  FUN_02da0a44();
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8(lVar5);
  }
  lVar8 = *unaff_x24;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar5) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_03d51480;
      }
      uVar9 = uVar9 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_032937ac();
LAB_03d51480:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar3 = PTR_DAT_0727a180;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar12 = 0;
  do {
    lVar5 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto FUN_03d514ec;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)puVar3,0);
FUN_03d514ec:
    uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_03d51714;
      lVar5 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 == 0)
      goto 
      System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current;
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8(lVar5);
    }
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar5) {
          lVar5 = lVar8 + (long)*piVar4 * 0x10 + 0x138;
          goto LAB_03d51570;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    lVar5 = FUN_032937ac(plVar7,lVar5,0);
LAB_03d51570:
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar7,unaff_x29 + -0x10,__src);
    memcpy(__s,__src,unaff_x21);
    if (iVar12 == 0) {
      memcpy(__src,__s,unaff_x21);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      FUN_032d5cbc();
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      puVar6 = (undefined8 *)thunk_FUN_032cddd4();
      plVar11 = (long *)*puVar6;
      memcpy(__src,__s,unaff_x21);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar2 = iVar12 - 1;
      if (*(uint *)(plVar11 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      memcpy((void *)((long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar2 + 0x20),
             __src,unaff_x21);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      if (*(uint *)(plVar11 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      FUN_032d5c5c(lVar5,(long)plVar11 +
                         (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar2 + 0x20,__src);
    }
    iVar12 = iVar12 + 1;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar4 = piVar4 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_03d51708;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current:
  puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)PTR_DAT_07279f60,0);
LAB_03d51708:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_03d51714:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


