/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 037c92f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x037ca03c) */
/* WARNING: Removing unreachable block (ram,0x037c9c50) */
/* WARNING: Removing unreachable block (ram,0x037c96f8) */
/* WARNING: Removing unreachable block (ram,0x037ca048) */
/* WARNING: Removing unreachable block (ram,0x037ca030) */

void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_VirtualKeyboardModelAnimationState>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int iVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  byte in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  long lStack000000000000007c;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  long lStack00000000000000bc;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  long lStack00000000000000fc;
  undefined4 uStack0000000000000104;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined8 in_stack_00000110;
  undefined4 uStack0000000000000118;
  undefined4 uStack000000000000011c;
  undefined4 uStack0000000000000120;
  undefined4 uStack0000000000000124;
  undefined4 in_stack_00000128;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  undefined4 in_stack_00000148;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000158;
  byte bStack000000000000015c;
  undefined4 in_stack_00000160;
  long in_stack_000004b8;
  
  do {
    FUN_037cb5ac(param_1,param_2,param_3);
    *(int *)(in_stack_00000050 + 0x24) = *(int *)(in_stack_00000050 + 0x24) + 1;
    do {
      lVar17 = *unaff_x20;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_037c9204;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9204:
      uVar18 = (*(code *)*puVar12)();
      puVar3 = PTR_DAT_06f97c38;
      if ((uVar18 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar17 = *unaff_x22;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 == 0)
        goto System_Array__InternalArray__ICollection_CopyTo<OVRRaycaster_RaycastHit>;
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_037c9338;
      }
      lVar17 = *unaff_x20;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_037c9268;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9268:
      puVar12 = (undefined8 *)(*(code *)*puVar12)();
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar18 = FUN_0377fc54(puVar12 + 2,puVar12 + 9,puVar12 + 0x10,0);
      if (*(long *)(in_stack_00000050 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<OVRResult<Int32Enum>,_object>>___ctor
                (*(long *)(in_stack_00000050 + 0x48),*puVar12,uVar18 & 1,*unaff_x21);
    } while ((uVar18 & 1) == 0);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_037cb5ac(puVar12[2],puVar12[3],puVar12[4]);
    FUN_037cb5ac(puVar12[9],puVar12[10],puVar12[0xb]);
    param_2 = puVar12[0x11];
    param_3 = puVar12[0x12];
    param_1 = puVar12[0x10];
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_037c9338:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c38) {
      puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
      goto LAB_037c9370;
    }
  }
System_Array__InternalArray__ICollection_CopyTo<OVRRaycaster_RaycastHit>:
  puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9370:
  (*(code *)*puVar12)();
  puVar6 = PTR_DAT_06f97c78;
  puVar5 = PTR_DAT_06f97c70;
  puVar4 = PTR_DAT_06f97c48;
  do {
    lVar17 = *unaff_x22;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_037c93e8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c93e8:
    uVar13 = (*(code *)*puVar12)();
    lVar17 = *unaff_x22;
    uVar2 = *(ushort *)(lVar17 + 0x12e);
    uVar18 = (ulong)uVar2;
    if ((uVar13 & 1) == 0) break;
    if (uVar2 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_037c9444;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9444:
    puVar14 = (undefined4 *)(*(code *)*puVar12)();
    uVar21 = *(undefined8 *)(in_stack_00000050 + 0x30);
    uVar1 = *puVar14;
    if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    in_stack_00000160 = uVar1;
    FUN_03e81f74(in_stack_00000050,uVar21,&stack0x00000160,0,*(undefined8 *)puVar4);
    FUN_03e852a4(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x38),puVar14 + 2,0,
                 *(undefined8 *)puVar5);
    FUN_03e85460(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x40),puVar14 + 2,0,
                 *(undefined8 *)puVar6);
  } while( true );
  if (uVar2 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_037c950c;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c950c:
  (*(code *)*puVar12)();
  do {
    lVar17 = *unaff_x22;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_037c956c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c956c:
    uVar18 = (*(code *)*puVar12)();
    if ((uVar18 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_037c96ec;
      lVar17 = *unaff_x23;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 == 0) goto LAB_037c96c4;
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      break;
    }
    lVar17 = *unaff_x22;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_037c95c8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c95c8:
    puVar14 = (undefined4 *)(*(code *)*puVar12)();
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    bVar7 = System_Array__InternalArray__ICollection_CopyTo<UIRenderDevice_AllocToFree>();
    if ((bVar7 & bStack000000000000015c) != 0) {
      uVar1 = *puVar14;
      uVar21 = *(undefined8 *)(in_stack_00000050 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      in_stack_00000160 = uVar1;
      FUN_03e81f74(in_stack_00000050,uVar21,&stack0x00000160,bStack000000000000015c != 0,
                   *(undefined8 *)puVar4);
      FUN_03e852a4(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x38),puVar14 + 2,
                   bStack000000000000015c,*(undefined8 *)puVar5);
      FUN_03e85460(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x40),puVar14 + 2,
                   bStack000000000000015c,*(undefined8 *)puVar6);
    }
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_037c96e0;
    }
  }
LAB_037c96c4:
  puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c96e0:
  (*(code *)*puVar12)();
LAB_037c96ec:
  if ((in_stack_00000040._4_4_ >> 4 & 1) != 0) {
    plVar15 = (long *)FUN_050822bc(*(undefined8 *)PTR_DAT_06f97cb0);
    plVar16 = (long *)FUN_05076d74(*(undefined8 *)PTR_DAT_06f97ca0);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar17 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_037c978c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c978c:
    (*(code *)*puVar12)();
    puVar4 = PTR_DAT_06f97cd0;
    puVar3 = PTR_DAT_06f97c60;
    iVar20 = 0;
    do {
      lVar17 = *unaff_x20;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_037c9808;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9808:
      uVar18 = (*(code *)*puVar12)();
      if ((uVar18 & 1) == 0) {
        FUN_037cb1cc(plVar16,iVar20);
        lVar17 = *unaff_x20;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 == 0) goto LAB_037c9a64;
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_037c9a4c;
      }
      lVar17 = *unaff_x20;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_037c986c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c986c:
      puVar14 = (undefined4 *)(*(code *)*puVar12)();
      uVar1 = puVar14[2];
      if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uStack0000000000000140 = puVar14[0x10];
      uStack0000000000000130 = puVar14[0x1e];
      in_stack_00000138 = *puVar14;
      uStack0000000000000144 = uStack0000000000000130;
      uStack0000000000000134 = uVar1;
      in_stack_00000148 = in_stack_00000138;
      uStack0000000000000150 = uVar1;
      uStack0000000000000154 = uStack0000000000000140;
      uStack0000000000000158 = in_stack_00000138;
      iVar8 = FUN_03e81e40(plVar15,&stack0x00000150,*(undefined8 *)puVar3);
      iVar9 = FUN_03e81e40(plVar15,&stack0x00000140,*(undefined8 *)puVar3);
      iVar10 = FUN_03e81e40(plVar15,&stack0x00000130,*(undefined8 *)puVar3);
      iVar11 = FUN_037cafd8(iVar8,iVar9,iVar10);
      if (iVar11 == 0x7fffffff) {
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_05082174(plVar15,CONCAT44(uStack0000000000000154,uStack0000000000000150),
                     uStack0000000000000158,iVar20,*(undefined8 *)puVar4);
        FUN_05082174(plVar15,CONCAT44(uStack0000000000000144,uStack0000000000000140),
                     in_stack_00000148,iVar20,*(undefined8 *)puVar4);
        FUN_05082174(plVar15,CONCAT44(uStack0000000000000134,uStack0000000000000130),
                     in_stack_00000138,iVar20,*(undefined8 *)puVar4);
        iVar20 = iVar20 + 1;
      }
      else {
        if (iVar8 == 0x7fffffff) {
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_05082174(plVar15,CONCAT44(uStack0000000000000154,uStack0000000000000150),
                       uStack0000000000000158,iVar11,*(undefined8 *)puVar4);
          if (iVar9 == 0x7fffffff) {
LAB_037c995c:
            FUN_05082174(plVar15,CONCAT44(uStack0000000000000144,uStack0000000000000140),
                         in_stack_00000148,iVar11,*(undefined8 *)puVar4);
          }
        }
        else if (iVar9 == 0x7fffffff) {
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          goto LAB_037c995c;
        }
        if (iVar10 == 0x7fffffff) {
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_05082174(plVar15,CONCAT44(uStack0000000000000134,uStack0000000000000130),
                       in_stack_00000138,iVar11,*(undefined8 *)puVar4);
        }
        FUN_037cb054(plVar16,iVar8,iVar11);
        FUN_037cb054(plVar16,iVar9,iVar11);
        FUN_037cb054(plVar16,iVar10,iVar11);
      }
    } while( true );
  }
  goto LAB_037c9ccc;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_037c9a4c:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
      puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
      goto LAB_037c9a84;
    }
  }
LAB_037c9a64:
  puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9a84:
  (*(code *)*puVar12)();
  puVar4 = PTR_DAT_06f97cb8;
  puVar3 = PTR_DAT_06f97c58;
  do {
    lVar17 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_037c9af8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9af8:
    uVar18 = (*(code *)*puVar12)();
    if ((uVar18 & 1) == 0) {
      if (plVar16 == (long *)0x0) goto LAB_037c9c40;
      lVar17 = *plVar16;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 == 0) goto LAB_037c9c18;
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      break;
    }
    lVar17 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_037c9b5c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9b5c:
    puVar12 = (undefined8 *)(*(code *)*puVar12)();
    uVar1 = *(undefined4 *)(puVar12 + 1);
    if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uStack0000000000000124 = *(undefined4 *)(puVar12 + 8);
    in_stack_00000128 = *(undefined4 *)puVar12;
    uStack0000000000000120 = uVar1;
    auVar22 = FUN_03e855e4(plVar15,plVar16,&stack0x00000120,*(undefined8 *)puVar3);
    uVar18 = auVar22._0_8_ & 0xffffffff;
    if (*(long *)(in_stack_00000050 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(0,auVar22._8_8_,uVar18);
    }
    FUN_0507e948(*(long *)(in_stack_00000050 + 0x50),*puVar12,uVar18,*(undefined8 *)puVar4);
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_037c9c34;
    }
  }
LAB_037c9c18:
  puVar12 = (undefined8 *)FUN_02feb5b8(plVar16,*(long *)PTR_DAT_06f70b30,0);
LAB_037c9c34:
  (*(code *)*puVar12)(plVar16,puVar12[1]);
LAB_037c9c40:
  if (plVar15 != (long *)0x0) {
    lVar17 = *plVar15;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f70b30) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_037c9cb0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8(plVar15,*(long *)PTR_DAT_06f70b30,0);
LAB_037c9cb0:
    (*(code *)*puVar12)(plVar15,puVar12[1]);
  }
LAB_037c9ccc:
  if ((in_stack_00000040._4_4_ >> 5 & 1) == 0) {
LAB_037c9cd4:
    if (*(long *)(in_stack_00000010 + 0x28) != in_stack_000004b8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (unaff_x20 == (long *)0x0) {
LAB_037c9ff4:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar17 = *unaff_x20;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_037c9d64;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9d64:
  (*(code *)*puVar12)();
  puVar3 = PTR_DAT_06f97c98;
  do {
    lVar17 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_037c9e00;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9e00:
    uVar18 = (*(code *)*puVar12)();
    if ((uVar18 & 1) == 0) goto LAB_037c9cd4;
    lVar17 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_037c9e64;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8();
LAB_037c9e64:
    puVar12 = (undefined8 *)(*(code *)*puVar12)();
    uVar1 = *(undefined4 *)(puVar12 + 1);
    uVar18 = *(ulong *)PTR_DAT_06f961e0;
    if (*(int *)(uVar18 + 0xe0) == 0) {
      uVar18 = thunk_FUN_02fdcff0();
    }
    uStack00000000000000b8 = *(undefined4 *)(puVar12 + 8);
    uStack0000000000000078 = *(undefined4 *)(puVar12 + 0xf);
    in_stack_00000110 = puVar12[0xb];
    uStack0000000000000108 = (undefined4)puVar12[10];
    uStack0000000000000104 = (undefined4)((ulong)puVar12[9] >> 0x20);
    in_stack_000000e8 = puVar12[3];
    in_stack_000000e0 = puVar12[2];
    in_stack_000000f0 = puVar12[4];
    lStack00000000000000fc = puVar12[9] << 0x20;
    bVar7 = 0;
    uStack000000000000010c = (undefined4)((ulong)puVar12[10] >> 0x20);
    uStack000000000000011c = 0;
    in_stack_000000d0 = puVar12[0x12];
    uStack00000000000000c8 = (undefined4)puVar12[0x11];
    uStack00000000000000c4 = (undefined4)((ulong)puVar12[0x10] >> 0x20);
    in_stack_000000a8 = puVar12[10];
    in_stack_000000a0 = puVar12[9];
    in_stack_000000b0 = puVar12[0xb];
    lStack00000000000000bc = puVar12[0x10] << 0x20;
    uStack00000000000000cc = (undefined4)((ulong)puVar12[0x11] >> 0x20);
    uStack00000000000000dc = 0;
    in_stack_00000090 = puVar12[4];
    uStack0000000000000088 = (undefined4)puVar12[3];
    uStack0000000000000084 = (undefined4)((ulong)puVar12[2] >> 0x20);
    in_stack_00000068 = puVar12[0x11];
    in_stack_00000060 = puVar12[0x10];
    in_stack_00000070 = puVar12[0x12];
    lStack000000000000007c = puVar12[2] << 0x20;
    uStack000000000000008c = (undefined4)((ulong)puVar12[3] >> 0x20);
    uStack000000000000009c = 0;
    uStack0000000000000098 = uVar1;
    uStack00000000000000d8 = uStack0000000000000078;
    uStack00000000000000f8 = uVar1;
    uStack0000000000000118 = uStack00000000000000b8;
    if ((in_stack_00000040._4_4_ >> 3 & 1) != 0) {
      if (*(long *)(in_stack_00000050 + 0x48) == 0) goto LAB_037c9ff4;
      uVar18 = FUN_0507f634(*(long *)(in_stack_00000050 + 0x48),*puVar12,&stack0x00000058,
                            *(undefined8 *)puVar3);
      if ((uVar18 & 1) == 0) {
        bVar7 = 0;
      }
      else {
        bVar7 = in_stack_00000058 & 1;
      }
    }
    uVar21 = FUN_037cb6a4(uVar18,*(undefined8 *)(in_stack_00000050 + 0x58),&stack0x000000e0,puVar12,
                          bVar7);
    uVar21 = FUN_037cb6a4(uVar21,*(undefined8 *)(in_stack_00000050 + 0x58),&stack0x000000a0,puVar12,
                          bVar7);
    FUN_037cb6a4(uVar21,*(undefined8 *)(in_stack_00000050 + 0x58),&stack0x00000060,puVar12,bVar7);
  } while( true );
}


