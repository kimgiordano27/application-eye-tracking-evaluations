/*
FUNCTION_NAME: FUN_03a38d70
ENTRY_POINT: 03a38d70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03a39758) */

long FUN_03a38d70(long param_1,uint param_2,long *param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  uint local_9c;
  long *local_90;
  undefined8 local_88;
  uint local_74 [3];
  undefined4 local_68;
  
                    /* try { // try from 03a38d7c to 03b38d7f has its CatchHandler @ 03a38dc4 */
                    /* try { // try from 03a38d94 to 03b38d9f has its CatchHandler @ 03a38dd0 */
                    /* try { // try from 03a38da0 to 03b38deb has its CatchHandler @ 03a38b50 */
  if ((DAT_04838bf3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_Get__);
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a38d7c with catch @ 03a38dc4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a38d54 with catch @ 03a38dc8
                        */
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a38d38 with catch @ 03a38dcc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a38d94 with catch @ 03a38dd0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a38d5c with catch @ 03a38dd4
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 03a38dec to 03b38e03 has its CatchHandler @ 03a38e4c */
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(StringLiteral_7169);
                    /* try { // try from 03a38e04 to 03b38e3b has its CatchHandler @ 03a38b50 */
    thunk_FUN_01efb3a4(StringLiteral_5859);
    thunk_FUN_01efb3a4(StringLiteral_7092);
    thunk_FUN_01efb3a4(StringLiteral_7170);
    thunk_FUN_01efb3a4(Method_System_Resources_ResourceSet_GetString__);
    DAT_04838bf3 = 1;
  }
  puVar2 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  local_68 = 0;
  if (param_3 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar13 = thunk_FUN_01f117cc();
    uVar14 = thunk_FUN_01efb3a4(StringLiteral_7171);
    FUN_034efd20(uVar13,uVar14,0);
    uVar14 = thunk_FUN_01efb3a4(StringLiteral_7172);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar13,uVar14);
  }
  lVar15 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  local_90 = (long *)**(long **)(*(long *)
                                  Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                + 0xb8);
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar15);
    lVar15 = *(long *)puVar2;
  }
  if (0xe < param_2) {
    uVar13 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                               );
    uVar13 = FUN_01f08890(uVar13,1);
    local_74[0] = param_2;
    uVar14 = thunk_FUN_01efb3a4(StringLiteral_7173);
    uVar14 = thunk_FUN_01f113fc(uVar14,local_74);
    FUN_01bc50c0(uVar13);
    FUN_01bc56ec(uVar13,uVar14);
    FUN_01bc5408(uVar13,0,uVar14);
    uVar14 = thunk_FUN_01efb3a4(StringLiteral_7174);
    uVar13 = FUN_033f1a88(uVar14,uVar13,0);
    thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
    uVar14 = thunk_FUN_01f117cc();
    FUN_03437810(uVar14,uVar13,0);
    uVar13 = thunk_FUN_01efb3a4(StringLiteral_7172);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar14,uVar13);
  }
  local_88 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
  plVar12 = local_90;
  switch(param_2) {
  default:
    if (*param_3 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_3);
    }
    local_9c = 0;
    plVar12 = param_3;
    break;
  case 6:
  case 7:
  case 8:
    if (*(long *)(*param_3 + 0x40) != *(long *)(lVar15 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_3);
    }
    puVar9 = (undefined8 *)thunk_FUN_01f11920(param_3);
    local_88 = *puVar9;
    local_9c = 0;
    break;
  case 10:
  case 0xb:
  case 0xc:
    if (*param_3 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_3);
    }
    if (*(int *)(*(long *)Method_Unity_VisualScripting_Member_Get__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0344aa58(param_3,0);
    local_9c = 0;
    local_90 = param_3;
    break;
  case 0xd:
    if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)StringLiteral_7170 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_3);
    }
    puVar7 = (uint *)thunk_FUN_01f11920(param_3);
    local_9c = *puVar7;
  }
  puVar3 = StringLiteral_7169;
  if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar13 = FUN_03532f80(0);
  lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_0353e50c(lVar15,0);
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
switchD_03a390e8_caseD_9:
  lVar17 = *plVar8;
  lVar16 = *(long *)puVar3;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar16) {
        puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_03a3902c;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar16,0);
LAB_03a3902c:
  uVar18 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar18 & 1) == 0) {
    plVar12 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar12 == (long *)0x0) {
      return lVar15;
    }
    lVar16 = *plVar12;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 == 0) goto LAB_03a39594;
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    goto LAB_03a3957c;
  }
  lVar17 = *plVar8;
  lVar16 = *(long *)puVar3;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar16) {
        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_03a3908c;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar16,1);
LAB_03a3908c:
  plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_5859 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_5859)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar10);
    }
  }
  switch(param_2) {
  case 0:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
    uVar14 = FUN_0340cdc0(uVar14,0);
    iVar5 = FUN_0340d374(plVar12,uVar14,1,uVar13,0);
    if (iVar5 != 0) {
      uVar14 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
      uVar4 = FUN_0340d374(plVar12,uVar14,1,uVar13,0);
      break;
    }
    goto LAB_03a39494;
  case 1:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar11 = (long *)FUN_03a36fc8(plVar10);
    puVar2 = StringLiteral_7169;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar16 = (**(code **)(*plVar11 + 0x188))(plVar11,1,*(undefined8 *)(*plVar11 + 400));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar16 = FUN_03411bcc(lVar16,**(undefined8 **)(*(long *)puVar2 + 0xb8),1,0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar4) {
      uVar20 = 0;
      do {
        if (uVar4 <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar17 = *(long *)(lVar16 + (long)(int)uVar20 * 8 + 0x20);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_03412f70(lVar17,0x3d,0);
        iVar5 = FUN_034134e8(lVar17,plVar12,uVar6,3,0);
        if (-1 < iVar5) goto LAB_03a39494;
        uVar4 = *(uint *)(lVar16 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)uVar4);
    }
    goto switchD_03a390e8_caseD_9;
  case 2:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = FUN_03450e7c(plVar10,0);
    uVar4 = FUN_0340d374(plVar12,uVar14,1,uVar13,0);
    break;
  case 3:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar16 = FUN_03a37144(plVar10,0,1);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar5 = FUN_03412f18(lVar16,plVar12,3,0);
    if (-1 < iVar5) goto LAB_03a39494;
    goto switchD_03a390e8_caseD_9;
  case 4:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = FUN_03450e10(plVar10,0);
    uVar4 = FUN_0340d374(plVar12,uVar14,1,uVar13,0);
    break;
  case 5:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
    uVar4 = FUN_0340d374(plVar12,uVar14,1,uVar13,0);
    break;
  case 6:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = FUN_0345174c(plVar10,0);
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_035500e0(local_88,uVar14,0);
    if ((uVar18 & 1) != 0) {
      uVar14 = FUN_03451930(plVar10,0);
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar18 = FUN_03550008(local_88,uVar14,0);
      goto LAB_03a39490;
    }
    goto switchD_03a390e8_caseD_9;
  case 7:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = FUN_0345174c(plVar10,0);
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_0354ff9c(local_88,uVar14,0);
    goto LAB_03a39490;
  case 8:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = FUN_03451930(plVar10,0);
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_03550074(local_88,uVar14,0);
LAB_03a39490:
    uVar18 = uVar18 & 1;
joined_r0x03a3944c:
    if (uVar18 != 0) goto LAB_03a39494;
  default:
    goto switchD_03a390e8_caseD_9;
  case 10:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar16 = FUN_03a36468(plVar10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar11 = *(long **)(lVar16 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
    break;
  case 0xc:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar16 = FUN_03a36468(plVar10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar18 = FUN_03a389dc(lVar16,local_90);
    goto joined_r0x03a3944c;
  case 0xd:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar16 = FUN_03a36468(plVar10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar11 = (long *)FUN_03a389dc(lVar16,*(undefined8 *)
                                           Method_System_Resources_ResourceSet_GetString__);
    if ((plVar11 != (long *)0x0) && (*plVar11 == *(long *)StringLiteral_7092)) {
      uVar4 = FUN_03a39eb4();
      uVar4 = local_9c & (uVar4 ^ 0xffffffff);
      break;
    }
    goto LAB_03a39494;
  case 0xe:
    uVar14 = FUN_03a38918(plVar10,plVar10);
    uVar4 = FUN_0340d374(plVar12,uVar14,1,uVar13,0);
  }
  if (uVar4 == 0) {
LAB_03a39494:
    if ((param_4 & 1) == 0) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03a38568(lVar15,plVar10);
    }
    else {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar18 = FUN_03a3822c(plVar10);
      if ((uVar18 & 1) != 0) {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03a38568(lVar15,plVar10);
      }
    }
  }
  goto switchD_03a390e8_caseD_9;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_03a3957c:
    if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03a395b0;
    }
  }
LAB_03a39594:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_03a395b0:
  (*(code *)*puVar9)(plVar12,puVar9[1]);
  return lVar15;
}


