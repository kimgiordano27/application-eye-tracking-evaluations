/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_state_sessions_set
ENTRY_POINT: 078f8fb8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x078f9270) */
/* WARNING: Removing unreachable block (ram,0x078f9240) */
/* WARNING: Removing unreachable block (ram,0x078f9244) */
/* WARNING: Removing unreachable block (ram,0x078f9594) */
/* WARNING: Removing unreachable block (ram,0x078f9254) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_state_sessions_set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *unaff_x19;
  long lVar11;
  undefined4 *puVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  char *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  char cStack0000000000000074;
  undefined8 in_stack_00000078;
  int iStack0000000000000084;
  long in_stack_00000088;
  int iStack0000000000000094;
  undefined4 *in_stack_00000098;
  
  FUN_03a8a718();
                    /* try { // try from 078f8fc4 to 079f9037 has its CatchHandler @ 078f8dc8 */
  FUN_03a8a718(PTR_DAT_08488b88);
  FUN_03a8a718(System_Buffers_IMemoryOwner<IntPtr>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<double,_float>_TypeInfo);
  FUN_03a8a718(PTR_DAT_0848b5c8);
  FUN_03a8a718(Unity_Properties_TypeConverter<double,_string>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<double,_ushort>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<double,_uint>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<double,_ulong>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xb99) = 1;
  puVar4 = Unity_Properties_TypeConverter<double,_ulong>_TypeInfo;
  puVar3 = Unity_Properties_TypeConverter<double,_float>_TypeInfo;
  puVar2 = Unity_Properties_TypeConverter<double,_sbyte>_TypeInfo;
  puVar1 = PTR_DAT_08488b88;
                    /* try { // try from 078f9038 to 079f9047 has its CatchHandler @ 078f9048 */
  iStack0000000000000084 = 0;
  in_stack_00000078 = 0;
  cStack0000000000000074 = '\0';
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  iStack0000000000000094 = *unaff_x19;
  in_stack_00000058 = 0;
  in_stack_00000088 = *(long *)(unaff_x19 + 8);
  if (iStack0000000000000094 == 0) {
    iVar7 = 0;
    goto LAB_078f943c;
  }
  if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000078 = *(undefined8 *)(in_stack_00000088 + 0x40);
  in_stack_00000010 = (undefined1 *)&stack0x00000094;
  in_stack_00000020 = &stack0x00000078;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000074;
  cStack0000000000000074 = '\0';
  FUN_067b43ac(in_stack_00000078,&stack0x00000074,0);
  if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar13 = *(long **)(in_stack_00000098 + 10);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar8 = *plVar13;
  lVar11 = *(long *)(in_stack_00000088 + 0x38);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0848b5c8) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_078f911c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)PTR_DAT_0848b5c8,0xc);
LAB_078f911c:
  in_stack_00000068 = (*(code *)*puVar5)(plVar13,puVar5[1]);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_0577e7a8(lVar11,in_stack_00000068,*(undefined8 *)(in_stack_00000098 + 10),
               *(undefined8 *)Unity_Properties_TypeConverter<double,_string>_TypeInfo);
  if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar7 = 4;
  if (*(int *)(*(long *)(in_stack_00000088 + 0x38) + 0x20) < 2) {
    iVar7 = 5;
  }
  if ((iStack0000000000000094 < 0) && (*in_stack_00000018 != '\0')) {
    thunk_FUN_03a98474(*in_stack_00000020,0);
  }
  if (iVar7 != 5) {
    if (iVar7 == 4) goto LAB_078f9548;
    if (iVar7 != 0) {
      return;
    }
  }
  iStack0000000000000084 = 0;
  if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000078 = *(undefined8 *)(in_stack_00000088 + 0x40);
  in_stack_00000010 = (undefined1 *)&stack0x00000094;
  in_stack_00000020 = &stack0x00000078;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000074;
  cStack0000000000000074 = '\0';
  FUN_067b43ac(in_stack_00000078,&stack0x00000074,0);
  if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iStack0000000000000084 = *(int *)(*(long *)(in_stack_00000088 + 0x38) + 0x20);
  if ((iStack0000000000000094 < 0) && (*in_stack_00000018 != '\0')) {
    thunk_FUN_03a98474(*in_stack_00000020,0);
  }
  while (iStack0000000000000084 != 0) {
    if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000078 = *(undefined8 *)(in_stack_00000088 + 0x40);
    in_stack_00000010 = (undefined1 *)&stack0x00000094;
    in_stack_00000020 = &stack0x00000078;
    in_stack_00000008 = 0;
    in_stack_00000018 = &stack0x00000074;
    cStack0000000000000074 = '\0';
    FUN_067b43ac(in_stack_00000078,&stack0x00000074,0);
    if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(in_stack_00000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar13 = (long *)FUN_0577ef34(*(long *)(in_stack_00000088 + 0x38),*(undefined8 *)puVar4);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_078f93e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar3,0);
LAB_078f93e8:
    uVar6 = (*(code *)*puVar5)(plVar13,0,puVar5[1]);
    *(undefined8 *)(in_stack_00000098 + 0xe) = uVar6;
    thunk_FUN_03afed3c();
    iVar7 = iStack0000000000000094;
    if ((iStack0000000000000094 < 0) && (*in_stack_00000018 != '\0')) {
      thunk_FUN_03a98474(*in_stack_00000020,0);
      iVar7 = iStack0000000000000094;
    }
LAB_078f943c:
    in_stack_00000010 = (undefined1 *)&stack0x00000094;
    in_stack_00000018 = (char *)&stack0x00000088;
    in_stack_00000008 = 0;
    in_stack_00000020 = &stack0x00000078;
    in_stack_00000028 = &stack0x00000074;
    in_stack_00000030 = &stack0x00000098;
    in_stack_00000038 = &stack0x00000068;
    in_stack_00000040 = (undefined1 *)&stack0x00000084;
    if (iVar7 == 0) {
      iStack0000000000000094 = -1;
      in_stack_00000060 = *(undefined8 *)(in_stack_00000098 + 0x10);
      *(undefined8 *)(in_stack_00000098 + 0x10) = 0;
      *in_stack_00000098 = 0xffffffff;
LAB_078f950c:
      iVar7 = 0xd;
      FUN_0666e9a8(&stack0x00000060,0);
    }
    else {
      if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = FUN_078f8668(in_stack_00000088,*(undefined8 *)(in_stack_00000098 + 0xe));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000060 = FUN_067c4bec(lVar8,0);
      uVar9 = FUN_0666e8e0(&stack0x00000060,0);
      if ((uVar9 & 1) != 0) goto LAB_078f950c;
      iStack0000000000000094 = 0;
      *in_stack_00000098 = 0;
      *(undefined8 *)(in_stack_00000098 + 0x10) = in_stack_00000060;
      thunk_FUN_03afed3c(in_stack_00000098 + 0x10,0);
      puVar12 = in_stack_00000098;
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar8,extraout_x1,in_stack_00000098);
      }
      iVar7 = 10;
      FUN_043e5990(puVar12 + 2,&stack0x00000060,in_stack_00000098,*(undefined8 *)puVar2);
    }
    FUN_03a548d0(&stack0x00000008);
    if ((iVar7 != 0xd) && (iVar7 != 0)) {
      return;
    }
    *(undefined8 *)(in_stack_00000098 + 0xe) = 0;
    thunk_FUN_03afed3c(in_stack_00000098 + 0xe,0);
  }
LAB_078f9548:
  puVar12 = in_stack_00000098 + 2;
  *in_stack_00000098 = 0xfffffffe;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(puVar12,0);
  return;
}


