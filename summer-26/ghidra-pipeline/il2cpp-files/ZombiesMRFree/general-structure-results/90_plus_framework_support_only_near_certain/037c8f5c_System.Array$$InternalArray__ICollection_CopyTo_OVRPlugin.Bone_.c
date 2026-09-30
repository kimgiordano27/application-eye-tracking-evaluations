/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Bone>
ENTRY_POINT: 037c8f5c
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

void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Bone>(code *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  int iVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  long in_stack_00000010;
  long *in_stack_00000020;
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
  undefined4 uStack0000000000000160;
  undefined4 uStack0000000000000164;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  long in_stack_000004b8;
  
  do {
    lVar15 = (*param_1)();
    uVar2 = *(undefined4 *)(lVar15 + 8);
    if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uStack0000000000000168 = *(undefined4 *)(lVar15 + 0x40);
    uStack0000000000000164 = *(undefined4 *)(lVar15 + 0x78);
    uStack000000000000016c = uVar2;
    FUN_03e81eb0(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x30),
                 (long)&stack0x00000168 + 4,lVar15,*unaff_x19);
    FUN_03e81eb0(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x30),&stack0x00000168,lVar15
                 ,*unaff_x19);
    FUN_03e81eb0(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x30),
                 (long)&stack0x00000160 + 4,lVar15,*unaff_x19);
    FUN_03e851d4(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x38),lVar15 + 0x10,lVar15,
                 *unaff_x21);
    FUN_03e851d4(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x38),lVar15 + 0x48,lVar15,
                 *unaff_x21);
    FUN_03e851d4(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x38),lVar15 + 0x80,lVar15,
                 *unaff_x21);
    lVar15 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_037c8ef4;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c8ef4:
    uVar20 = (*(code *)*puVar14)();
    if ((uVar20 & 1) == 0) break;
    lVar15 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_037c8f58;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c8f58:
    param_1 = (code *)*puVar14;
  } while( true );
  if ((in_stack_00000040._4_4_ >> 2 & 1) != 0) {
    if (unaff_x20 != (long *)0x0) {
      lVar15 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_037c9050;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9050:
      (*(code *)*puVar14)();
      puVar4 = PTR_DAT_06f97c80;
      do {
        lVar15 = *unaff_x20;
        uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
              puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 2) * 0x10 + 0x138);
              goto LAB_037c90c0;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c90c0:
        uVar20 = (*(code *)*puVar14)();
        if ((uVar20 & 1) == 0) goto LAB_037c8d74;
        lVar15 = *unaff_x20;
        uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
              puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_037c9124;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9124:
        lVar15 = (*(code *)*puVar14)();
        FUN_03e8535c(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x40),lVar15 + 0x10,
                     lVar15,*(undefined8 *)puVar4);
        FUN_03e8535c(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x40),lVar15 + 0x48,
                     lVar15,*(undefined8 *)puVar4);
        FUN_03e8535c(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x40),lVar15 + 0x80,
                     lVar15,*(undefined8 *)puVar4);
      } while( true );
    }
    goto LAB_037c9ff4;
  }
LAB_037c8d74:
  if ((in_stack_00000040._4_4_ >> 3 & 1) != 0) {
    plVar13 = (long *)FUN_037cb4b4();
    *(undefined4 *)(in_stack_00000050 + 0x24) = 0;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar15 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_037c9190;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9190:
    (*(code *)*puVar14)();
    puVar6 = PTR_DAT_06f97cc0;
    puVar4 = PTR_DAT_06f95888;
    do {
      lVar15 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_037c9204;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9204:
      uVar20 = (*(code *)*puVar14)();
      puVar5 = PTR_DAT_06f97c38;
      if ((uVar20 & 1) == 0) {
        if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar15 = *in_stack_00000020;
        uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar20 == 0)
        goto System_Array__InternalArray__ICollection_CopyTo<OVRRaycaster_RaycastHit>;
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_037c9338;
      }
      lVar15 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_037c9268;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9268:
      puVar14 = (undefined8 *)(*(code *)*puVar14)();
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar20 = FUN_0377fc54(puVar14 + 2,puVar14 + 9,puVar14 + 0x10,0);
      if (*(long *)(in_stack_00000050 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<OVRResult<Int32Enum>,_object>>___ctor
                (*(long *)(in_stack_00000050 + 0x48),*puVar14,uVar20 & 1,*(undefined8 *)puVar6);
      if ((uVar20 & 1) != 0) {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_037cb5ac(puVar14[2],puVar14[3],puVar14[4],plVar13,1);
        FUN_037cb5ac(puVar14[9],puVar14[10],puVar14[0xb],plVar13,1);
        FUN_037cb5ac(puVar14[0x10],puVar14[0x11],puVar14[0x12],plVar13,1);
        *(int *)(in_stack_00000050 + 0x24) = *(int *)(in_stack_00000050 + 0x24) + 1;
      }
    } while( true );
  }
  goto LAB_037c96fc;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_037c9338:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c38) {
      puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 1) * 0x10 + 0x138);
      goto LAB_037c9370;
    }
  }
System_Array__InternalArray__ICollection_CopyTo<OVRRaycaster_RaycastHit>:
  puVar14 = (undefined8 *)FUN_02feb5b8(in_stack_00000020,*(long *)PTR_DAT_06f97c38,1);
LAB_037c9370:
  (*(code *)*puVar14)(in_stack_00000020,puVar14[1]);
  puVar7 = PTR_DAT_06f97c78;
  puVar6 = PTR_DAT_06f97c70;
  puVar4 = PTR_DAT_06f97c48;
  do {
    lVar15 = *in_stack_00000020;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
          puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_037c93e8;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(in_stack_00000020,*(long *)puVar5,2);
LAB_037c93e8:
    uVar16 = (*(code *)*puVar14)(in_stack_00000020,puVar14[1]);
    lVar19 = *in_stack_00000020;
    lVar15 = *(long *)puVar5;
    uVar3 = *(ushort *)(lVar19 + 0x12e);
    uVar20 = (ulong)uVar3;
    if ((uVar16 & 1) == 0) break;
    if (uVar3 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar15) {
          puVar14 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_037c9444;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(in_stack_00000020,lVar15,0);
LAB_037c9444:
    puVar17 = (undefined4 *)(*(code *)*puVar14)(in_stack_00000020,puVar14[1]);
    uVar23 = *(undefined8 *)(in_stack_00000050 + 0x30);
    uVar2 = *puVar17;
    if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uStack0000000000000160 = uVar2;
    FUN_03e81f74(in_stack_00000050,uVar23,&stack0x00000160,0,*(undefined8 *)puVar4);
    FUN_03e852a4(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x38),puVar17 + 2,0,
                 *(undefined8 *)puVar6);
    FUN_03e85460(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x40),puVar17 + 2,0,
                 *(undefined8 *)puVar7);
  } while( true );
  if (uVar3 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == lVar15) {
        puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
        goto LAB_037c950c;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(in_stack_00000020,lVar15,1);
LAB_037c950c:
  (*(code *)*puVar14)(in_stack_00000020,puVar14[1]);
  do {
    lVar15 = *in_stack_00000020;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
          puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_037c956c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(in_stack_00000020,*(long *)puVar5,2);
LAB_037c956c:
    uVar20 = (*(code *)*puVar14)(in_stack_00000020,puVar14[1]);
    if ((uVar20 & 1) == 0) {
      if (plVar13 == (long *)0x0) goto LAB_037c96fc;
      lVar15 = *plVar13;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 == 0) goto LAB_037c96c4;
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      goto LAB_037c96ac;
    }
    lVar15 = *in_stack_00000020;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
          puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_037c95c8;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(in_stack_00000020,*(long *)puVar5,0);
LAB_037c95c8:
    puVar17 = (undefined4 *)(*(code *)*puVar14)(in_stack_00000020,puVar14[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    puVar1 = puVar17 + 2;
    bVar8 = System_Array__InternalArray__ICollection_CopyTo<UIRenderDevice_AllocToFree>
                      (plVar13,puVar1,(long)&stack0x00000158 + 4);
    if ((bVar8 & bStack000000000000015c) != 0) {
      uVar2 = *puVar17;
      uVar23 = *(undefined8 *)(in_stack_00000050 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uStack0000000000000160 = uVar2;
      FUN_03e81f74(in_stack_00000050,uVar23,&stack0x00000160,bStack000000000000015c != 0,
                   *(undefined8 *)puVar4);
      FUN_03e852a4(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x38),puVar1,
                   bStack000000000000015c,*(undefined8 *)puVar6);
      FUN_03e85460(in_stack_00000050,*(undefined8 *)(in_stack_00000050 + 0x40),puVar1,
                   bStack000000000000015c,*(undefined8 *)puVar7);
    }
  } while( true );
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_037c9a4c:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
      puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 1) * 0x10 + 0x138);
      goto LAB_037c9a84;
    }
  }
LAB_037c9a64:
  puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9a84:
  (*(code *)*puVar14)();
  puVar6 = PTR_DAT_06f97cb8;
  puVar4 = PTR_DAT_06f97c58;
  do {
    lVar15 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_037c9af8;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9af8:
    uVar20 = (*(code *)*puVar14)();
    if ((uVar20 & 1) == 0) {
      if (plVar18 == (long *)0x0) goto LAB_037c9c40;
      lVar15 = *plVar18;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 == 0) goto LAB_037c9c18;
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    lVar15 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_037c9b5c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9b5c:
    puVar14 = (undefined8 *)(*(code *)*puVar14)();
    uVar2 = *(undefined4 *)(puVar14 + 1);
    if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uStack0000000000000124 = *(undefined4 *)(puVar14 + 8);
    in_stack_00000128 = *(undefined4 *)puVar14;
    uStack0000000000000120 = uVar2;
    auVar24 = FUN_03e855e4(plVar13,plVar18,&stack0x00000120,*(undefined8 *)puVar4);
    uVar20 = auVar24._0_8_ & 0xffffffff;
    if (*(long *)(in_stack_00000050 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(0,auVar24._8_8_,uVar20);
    }
    FUN_0507e948(*(long *)(in_stack_00000050 + 0x50),*puVar14,uVar20,*(undefined8 *)puVar6);
  } while( true );
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_037c9c34;
    }
  }
LAB_037c9c18:
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar18,*(long *)PTR_DAT_06f70b30,0);
LAB_037c9c34:
  (*(code *)*puVar14)(plVar18,puVar14[1]);
LAB_037c9c40:
  if (plVar13 != (long *)0x0) {
    lVar15 = *plVar13;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f70b30) {
          puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_037c9cb0;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(plVar13,*(long *)PTR_DAT_06f70b30,0);
LAB_037c9cb0:
    (*(code *)*puVar14)(plVar13,puVar14[1]);
  }
  goto LAB_037c9ccc;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_037c96ac:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_037c96e0;
    }
  }
LAB_037c96c4:
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar13,*(long *)PTR_DAT_06f70b30,0);
LAB_037c96e0:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_037c96fc:
  if ((in_stack_00000040._4_4_ >> 4 & 1) != 0) {
    plVar13 = (long *)FUN_050822bc(*(undefined8 *)PTR_DAT_06f97cb0);
    plVar18 = (long *)FUN_05076d74(*(undefined8 *)PTR_DAT_06f97ca0);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar15 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_037c978c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c978c:
    (*(code *)*puVar14)();
    puVar6 = PTR_DAT_06f97cd0;
    puVar4 = PTR_DAT_06f97c60;
    iVar22 = 0;
    do {
      lVar15 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_037c9808;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9808:
      uVar20 = (*(code *)*puVar14)();
      if ((uVar20 & 1) == 0) {
        FUN_037cb1cc(plVar18,iVar22);
        lVar15 = *unaff_x20;
        uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar20 == 0) goto LAB_037c9a64;
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_037c9a4c;
      }
      lVar15 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_037c986c;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c986c:
      puVar17 = (undefined4 *)(*(code *)*puVar14)();
      uVar2 = puVar17[2];
      if (*(int *)(*(long *)PTR_DAT_06f961e0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uStack0000000000000140 = puVar17[0x10];
      uStack0000000000000130 = puVar17[0x1e];
      in_stack_00000138 = *puVar17;
      uStack0000000000000144 = uStack0000000000000130;
      uStack0000000000000134 = uVar2;
      in_stack_00000148 = in_stack_00000138;
      uStack0000000000000150 = uVar2;
      uStack0000000000000154 = uStack0000000000000140;
      uStack0000000000000158 = in_stack_00000138;
      iVar9 = FUN_03e81e40(plVar13,&stack0x00000150,*(undefined8 *)puVar4);
      iVar10 = FUN_03e81e40(plVar13,&stack0x00000140,*(undefined8 *)puVar4);
      iVar11 = FUN_03e81e40(plVar13,&stack0x00000130,*(undefined8 *)puVar4);
      iVar12 = FUN_037cafd8(iVar9,iVar10,iVar11);
      if (iVar12 == 0x7fffffff) {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_05082174(plVar13,CONCAT44(uStack0000000000000154,uStack0000000000000150),
                     uStack0000000000000158,iVar22,*(undefined8 *)puVar6);
        FUN_05082174(plVar13,CONCAT44(uStack0000000000000144,uStack0000000000000140),
                     in_stack_00000148,iVar22,*(undefined8 *)puVar6);
        FUN_05082174(plVar13,CONCAT44(uStack0000000000000134,uStack0000000000000130),
                     in_stack_00000138,iVar22,*(undefined8 *)puVar6);
        iVar22 = iVar22 + 1;
      }
      else {
        if (iVar9 == 0x7fffffff) {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_05082174(plVar13,CONCAT44(uStack0000000000000154,uStack0000000000000150),
                       uStack0000000000000158,iVar12,*(undefined8 *)puVar6);
          if (iVar10 == 0x7fffffff) {
LAB_037c995c:
            FUN_05082174(plVar13,CONCAT44(uStack0000000000000144,uStack0000000000000140),
                         in_stack_00000148,iVar12,*(undefined8 *)puVar6);
          }
        }
        else if (iVar10 == 0x7fffffff) {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          goto LAB_037c995c;
        }
        if (iVar11 == 0x7fffffff) {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_05082174(plVar13,CONCAT44(uStack0000000000000134,uStack0000000000000130),
                       in_stack_00000138,iVar12,*(undefined8 *)puVar6);
        }
        FUN_037cb054(plVar18,iVar9,iVar12);
        FUN_037cb054(plVar18,iVar10,iVar12);
        FUN_037cb054(plVar18,iVar11,iVar12);
      }
    } while( true );
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
  if (unaff_x20 != (long *)0x0) {
    lVar15 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
          puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_037c9d64;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9d64:
    (*(code *)*puVar14)();
    puVar4 = PTR_DAT_06f97c98;
    do {
      lVar15 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar14 = (undefined8 *)(lVar15 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_037c9e00;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9e00:
      uVar20 = (*(code *)*puVar14)();
      if ((uVar20 & 1) == 0) goto LAB_037c9cd4;
      lVar15 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06f97c40) {
            puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_037c9e64;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar14 = (undefined8 *)FUN_02feb5b8();
LAB_037c9e64:
      puVar14 = (undefined8 *)(*(code *)*puVar14)();
      uVar2 = *(undefined4 *)(puVar14 + 1);
      uVar20 = *(ulong *)PTR_DAT_06f961e0;
      if (*(int *)(uVar20 + 0xe0) == 0) {
        uVar20 = thunk_FUN_02fdcff0();
      }
      uStack00000000000000b8 = *(undefined4 *)(puVar14 + 8);
      uStack0000000000000078 = *(undefined4 *)(puVar14 + 0xf);
      in_stack_00000110 = puVar14[0xb];
      uStack0000000000000108 = (undefined4)puVar14[10];
      uStack0000000000000104 = (undefined4)((ulong)puVar14[9] >> 0x20);
      in_stack_000000e8 = puVar14[3];
      in_stack_000000e0 = puVar14[2];
      in_stack_000000f0 = puVar14[4];
      lStack00000000000000fc = puVar14[9] << 0x20;
      bVar8 = 0;
      uStack000000000000010c = (undefined4)((ulong)puVar14[10] >> 0x20);
      uStack000000000000011c = 0;
      in_stack_000000d0 = puVar14[0x12];
      uStack00000000000000c8 = (undefined4)puVar14[0x11];
      uStack00000000000000c4 = (undefined4)((ulong)puVar14[0x10] >> 0x20);
      in_stack_000000a8 = puVar14[10];
      in_stack_000000a0 = puVar14[9];
      in_stack_000000b0 = puVar14[0xb];
      lStack00000000000000bc = puVar14[0x10] << 0x20;
      uStack00000000000000cc = (undefined4)((ulong)puVar14[0x11] >> 0x20);
      uStack00000000000000dc = 0;
      in_stack_00000090 = puVar14[4];
      uStack0000000000000088 = (undefined4)puVar14[3];
      uStack0000000000000084 = (undefined4)((ulong)puVar14[2] >> 0x20);
      in_stack_00000068 = puVar14[0x11];
      in_stack_00000060 = puVar14[0x10];
      in_stack_00000070 = puVar14[0x12];
      lStack000000000000007c = puVar14[2] << 0x20;
      uStack000000000000008c = (undefined4)((ulong)puVar14[3] >> 0x20);
      uStack000000000000009c = 0;
      uStack0000000000000098 = uVar2;
      uStack00000000000000d8 = uStack0000000000000078;
      uStack00000000000000f8 = uVar2;
      uStack0000000000000118 = uStack00000000000000b8;
      if ((in_stack_00000040._4_4_ >> 3 & 1) != 0) {
        if (*(long *)(in_stack_00000050 + 0x48) == 0) break;
        uVar20 = FUN_0507f634(*(long *)(in_stack_00000050 + 0x48),*puVar14,&stack0x00000058,
                              *(undefined8 *)puVar4);
        if ((uVar20 & 1) == 0) {
          bVar8 = 0;
        }
        else {
          bVar8 = in_stack_00000058 & 1;
        }
      }
      uVar23 = FUN_037cb6a4(uVar20,*(undefined8 *)(in_stack_00000050 + 0x58),&stack0x000000e0,
                            puVar14,bVar8);
      uVar23 = FUN_037cb6a4(uVar23,*(undefined8 *)(in_stack_00000050 + 0x58),&stack0x000000a0,
                            puVar14,bVar8);
      FUN_037cb6a4(uVar23,*(undefined8 *)(in_stack_00000050 + 0x58),&stack0x00000060,puVar14,bVar8);
    } while( true );
  }
LAB_037c9ff4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


