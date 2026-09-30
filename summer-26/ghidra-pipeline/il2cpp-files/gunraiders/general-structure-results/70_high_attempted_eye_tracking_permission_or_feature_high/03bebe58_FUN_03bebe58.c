/*
FUNCTION_NAME: FUN_03bebe58
ENTRY_POINT: 03bebe58
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable
*/


/* WARNING: Removing unreachable block (ram,0x03bec39c) */
/* WARNING: Removing unreachable block (ram,0x03bec100) */
/* WARNING: Removing unreachable block (ram,0x03bec538) */
/* WARNING: Removing unreachable block (ram,0x03bec54c) */
/* WARNING: Removing unreachable block (ram,0x03bec550) */
/* WARNING: Removing unreachable block (ram,0x03bec570) */
/* WARNING: Removing unreachable block (ram,0x03bec558) */

void FUN_03bebe58(undefined8 param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined1 auStack_da0 [528];
  undefined1 local_b90 [528];
  undefined1 local_980 [8];
  undefined1 auStack_978 [696];
  undefined1 local_6c0 [16];
  long local_6b0;
  undefined1 local_6a8 [8];
  undefined8 local_6a0;
  undefined1 auStack_698 [1584];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_6a0 = param_1;
  if ((DAT_0453b208 & 1) == 0) {
    FUN_01c5d288(StringLiteral_924);
    FUN_01c5d288(StringLiteral_2788);
    FUN_01c5d288(StringLiteral_4138);
                    /* try { // try from 03bebeb8 to 03cebf73 has its CatchHandler @ 03bebeb8
                       catch() { ... } // from try @ 03bebeb8 with catch @ 03bebeb8
                       catch() { ... } // from try @ 03bebfb8 with catch @ 03bebeb8
                       catch() { ... } // from try @ 03bebfe4 with catch @ 03bebeb8
                       catch() { ... } // from try @ 03bec010 with catch @ 03bebeb8
                       catch() { ... } // from try @ 03bec044 with catch @ 03bebeb8 */
    FUN_01c5d288(System_Data_Index_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(StringLiteral_4139);
    FUN_01c5d288(StringLiteral_816);
    FUN_01c5d288(StringLiteral_4140);
    FUN_01c5d288(StringLiteral_904);
    FUN_01c5d288(StringLiteral_2778);
    FUN_01c5d288(Oculus_Platform_MessageWithMatchmakingEnqueueResultAndRoom_TypeInfo);
    FUN_01c5d288(StringLiteral_4141);
    FUN_01c5d288(StringLiteral_4142);
    FUN_01c5d288(StringLiteral_4143);
    DAT_0453b208 = 1;
  }
  memset(auStack_698,0,0x630);
  local_6a8[0] = 0;
  local_6b0 = 0;
  local_6c0._8_8_ = 0;
  local_6c0._0_8_ = 0;
  memset(auStack_978,0,0x2b8);
  puVar4 = Oculus_Platform_MessageWithMatchmakingEnqueueResultAndRoom_TypeInfo;
                    /* try { // try from 03bebf74 to 03cebf7b has its CatchHandler @ 03bebff8 */
  local_980[0] = 0;
  plVar14 = *(long **)((long)param_2 + 0x1b8);
  lVar15 = *(long *)((long)param_2 + 0xc0);
  if (plVar14 == (long *)0x0) {
    if (lVar15 == 0) {
LAB_03bec554:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar12 = FUN_03d4ded0(lVar15,0);
    uVar12 = System_Convert__ToSingle(*(undefined8 *)StringLiteral_4142,uVar12,0);
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
    }
    FUN_03d046d0(uVar12,0);
  }
  else {
                    /* try { // try from 03bebf88 to 03cebf93 has its CatchHandler @ 03bebff0 */
    memcpy(local_b90,param_2,0x210);
                    /* try { // try from 03bebf9c to 03cebfa7 has its CatchHandler @ 03bebff4 */
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    /* try { // try from 03bebfa8 to 03cebfb7 has its CatchHandler @ 03bebfec */
      thunk_FUN_01c1d1e8();
    }
                    /* try { // try from 03bebfb8 to 03cebfdf has its CatchHandler @ 03bebeb8 */
    memcpy(auStack_da0,local_b90,0x210);
    uVar10 = UnityEngine_Android_Permission__RequestUserPermissions(auStack_da0,auStack_698);
    puVar7 = StringLiteral_2778;
    if ((uVar10 & 1) != 0) {
      lVar11 = *(long *)StringLiteral_2778;
      if (*(int *)(lVar11 + 0xe0) == 0) {
                    /* try { // try from 03bebfe0 to 03cebfe3 has its CatchHandler @ 03bebfe8 */
        thunk_FUN_01c1d1e8();
                    /* try { // try from 03bebfe4 to 03cec00b has its CatchHandler @ 03bebeb8 */
        lVar11 = *(long *)puVar7;
      }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03bebfe0 with catch @ 03bebfe8
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03bebfa8 with catch @ 03bebfec
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03bebf88 with catch @ 03bebff0
                        */
      **(undefined8 **)(lVar11 + 0xb8) = plVar14;
      puVar6 = StringLiteral_924;
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03bebf9c with catch @ 03bebff4
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03bebf74 with catch @ 03bebff8
                        */
      if (*(int *)(*(long *)StringLiteral_924 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
                    /* try { // try from 03bec00c to 03cec00f has its CatchHandler @ 03bec034 */
      lVar11 = FUN_03afc648(0);
                    /* try { // try from 03bec010 to 03cec03b has its CatchHandler @ 03bebeb8 */
      if (*(long *)((long)param_2 + 0x178) == 0) goto LAB_03bec554;
      uVar10 = FUN_03ae44d4(*(long *)((long)param_2 + 0x178),0);
      lVar13 = 0;
      if ((uVar10 & 1) == 0) {
        lVar13 = lVar11;
      }
      if (*(int *)(*(long *)StringLiteral_4139 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)StringLiteral_4139);
      }
      uVar12 = FUN_03bec8e4(lVar15);
      FUN_03b1068c(local_6a8,lVar13,uVar12,0);
      FUN_03ba9a88(plVar14,*(undefined4 *)((long)param_2 + 200),0);
      puVar8 = StringLiteral_4140;
      lVar13 = *(long *)StringLiteral_4140;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar13 = *(long *)puVar8;
      }
      local_b90[0] = 0;
      FUN_03b1068c(local_b90,0,**(undefined8 **)(lVar13 + 0xb8),0);
      local_980[0] = local_b90[0];
      TMPro_TMP_Text__GetUTF32(plVar14,param_2,0);
      (**(code **)(*plVar14 + 0x1f8))(plVar14,auStack_698,param_2,*(undefined8 *)(*plVar14 + 0x200))
      ;
      FUN_03b10690(local_980,0);
      puVar5 = StringLiteral_904;
      if (*(int *)(*(long *)StringLiteral_904 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03d723b8(&local_6a0,lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03d654f0(lVar11,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      UnityEngine_Animation__Play(lVar11);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      iVar9 = FUN_03d00e04(lVar15,0);
      if ((iVar9 == 0x10) || (iVar9 = FUN_03d00e04(lVar15,0), iVar9 == 4)) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03d71050(lVar15,0);
      }
      uVar10 = FUN_0230cff0(lVar15,&local_6b0,*(undefined8 *)StringLiteral_2788);
      if ((uVar10 & 1) != 0) {
        if (local_6b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(local_6b0 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_03bb6c50(*(long *)(local_6b0 + 0x90),param_2,0);
      }
      if (*(long *)((long)param_2 + 0x1e0) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03bece14(param_2);
      }
      uVar1 = *(undefined4 *)((long)param_2 + 0xd8);
      uVar2 = *(undefined4 *)((long)param_2 + 0xdc);
      if (*(int *)(*(long *)StringLiteral_816 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03b35aa4(uVar1,uVar2,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_6c0 = FUN_03d727b0(&local_6a0,auStack_698,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar4);
      }
      uVar12 = FUN_03be9600();
      FUN_03beceb0(uVar12,param_2,local_6c0,lVar11,auStack_978);
      FUN_03bad620(plVar14,auStack_978,0);
      lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
      if (*(char *)(lVar15 + 0x18) == '\0') {
        lVar15 = *(long *)puVar8;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar15 = *(long *)puVar8;
        }
        local_b90[0] = 0;
        FUN_03b1068c(local_b90,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8),0);
        local_980[0] = local_b90[0];
        (**(code **)(*plVar14 + 0x1d8))
                  (plVar14,local_6a0,auStack_978,*(undefined8 *)(*plVar14 + 0x1e0));
        FUN_03b10690(local_980,0);
        FUN_03bab678(plVar14,local_6a0,auStack_978,0);
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        FUN_03bed364(*(undefined8 *)(lVar15 + 8),local_6a0,auStack_978);
        FUN_03bab128(plVar14,local_6a0,auStack_978,0);
      }
      FUN_03b10690(local_6a8,0);
      puVar4 = StringLiteral_904;
      if (*(int *)(*(long *)StringLiteral_904 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03d723b8(&local_6a0,lVar11,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03afc788(lVar11,0);
      puVar6 = StringLiteral_4138;
      lVar15 = *(long *)StringLiteral_4138;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar15 = *(long *)puVar6;
      }
      FUN_03b1068c(local_6a8,0,**(undefined8 **)(lVar15 + 0xb8),0);
      if (*(char *)((long)plVar14 + 0x1a4) != '\0') {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_03d71e48(&local_6a0,0);
        if ((uVar10 & 1) == 0) {
          *(undefined1 *)((long)plVar14 + 0x1a4) = 0;
          if (*(int *)(*(long *)System_Data_Index_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_03b47e74(lVar11,*(undefined8 *)StringLiteral_4143,0,0);
          if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_03d046d0(*(undefined8 *)StringLiteral_4141,0);
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03d71df4(&local_6a0,0);
      FUN_03b10690(local_6a8,0);
      lVar15 = *(long *)puVar7;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar15 = *(long *)puVar7;
      }
      **(undefined8 **)(lVar15 + 0xb8) = 0;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


