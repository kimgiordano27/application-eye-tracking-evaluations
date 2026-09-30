/*
FUNCTION_NAME: FUN_03d511b4
ENTRY_POINT: 03d511b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03d51760) */

void FUN_03d511b4(void *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *__src;
  undefined1 *__s;
  code *pcVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  undefined1 auStack_80 [8];
  long local_78;
  undefined1 *local_70;
  long local_68;
  
  local_78 = tpidr_el0;
  local_68 = *(long *)(local_78 + 0x28);
  if ((DAT_076cf8b7 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    DAT_076cf8b7 = 1;
  }
  lVar9 = *(long *)(param_3 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar5 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_032934b8(lVar9);
    uVar2 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar5 = *(long *)(param_3 + 0x20);
  }
  uVar11 = (ulong)*(uint *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_032934b8(lVar5);
  }
  uVar10 = uVar11 + 0xf & 0x1fffffff0;
  uVar1 = *(uint *)(**(long **)(lVar5 + 0xc0) + 0xfc);
  __src = auStack_80 + -uVar10;
  __s = __src + -uVar10;
  memset(__s,0,uVar11);
  memset(param_1,0,(ulong)uVar1);
  lVar9 = *(long *)(param_3 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar5 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_032934b8(lVar9);
    uVar2 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar5 = *(long *)(param_3 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_032934b8(lVar5);
  }
  uVar4 = (*pcVar12)(param_2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20));
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8(lVar5);
  }
  FUN_02d9fe48(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80),uVar4);
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  piVar6 = (int *)thunk_FUN_032cddd4(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
  lVar5 = *(long *)(param_3 + 0x20);
  iVar15 = *piVar6;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  lVar5 = *(long *)(**(long **)(lVar5 + 0xc0) + 0x80);
  if (iVar15 < 2) {
    uVar13 = 0;
  }
  else {
    piVar6 = (int *)thunk_FUN_032cddd4(param_1);
    lVar5 = *(long *)(param_3 + 0x20);
    iVar15 = *piVar6;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    uVar13 = FUN_032d5d3c(lVar5,iVar15 + -1);
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8(lVar5);
    }
    lVar5 = *(long *)(**(long **)(lVar5 + 0xc0) + 0x80);
  }
  FUN_02da0a44(param_1,lVar5 + 0x40,uVar13);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8(lVar5);
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar5) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03d51480;
      }
      uVar10 = uVar10 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_032937ac(param_2,lVar5,0);
LAB_03d51480:
  plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
  puVar3 = PTR_DAT_0727a180;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar15 = 0;
  do {
    lVar5 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_03d514ec;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_032937ac(plVar8,*(long *)puVar3,0);
FUN_03d514ec:
    uVar10 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_03d51714;
      lVar5 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 == 0)
      goto 
      System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8(lVar5);
    }
    lVar9 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar5) {
          lVar5 = lVar9 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_03d51570;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    lVar5 = FUN_032937ac(plVar8,lVar5,0);
LAB_03d51570:
    lVar5 = *(long *)(lVar5 + 8);
    local_70 = __src;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar8,&local_70,__src);
    memcpy(__s,__src,uVar11);
    if (iVar15 == 0) {
      memcpy(__src,__s,uVar11);
      lVar5 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      FUN_032d5cbc(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x20,__src,uVar11);
    }
    else {
      lVar5 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      puVar7 = (undefined8 *)
               thunk_FUN_032cddd4(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x40);
      plVar14 = (long *)*puVar7;
      memcpy(__src,__s,uVar11);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar1 = iVar15 - 1;
      if (*(uint *)(plVar14 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      memcpy((void *)((long)plVar14 + (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar1 + 0x20),
             __src,uVar11);
      lVar5 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      if (*(uint *)(plVar14 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      FUN_032d5c5c(lVar5,(long)plVar14 +
                         (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar1 + 0x20,__src);
    }
    iVar15 = iVar15 + 1;
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar6 = piVar6 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03d51708;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current:
  puVar7 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_07279f60,0);
LAB_03d51708:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_03d51714:
  if (*(long *)(local_78 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


