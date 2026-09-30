/*
FUNCTION_NAME: Unity.VisualScripting.XEventGraph$$TriggerEventHandler<EmptyEventArgs>
ENTRY_POINT: 02358150
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02358338) */
/* WARNING: Removing unreachable block (ram,0x023583f0) */

bool Unity_VisualScripting_XEventGraph__TriggerEventHandler<EmptyEventArgs>(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar5;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 *in_stack_00000008;
  void *in_stack_00000010;
  void *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  char in_stack_00000180;
  
  do {
    memcpy(&stack0x000000f0,&stack0x00000020,0x50);
    uVar2 = FUN_03b56294(&stack0x000000f0,0);
    if (((uVar2 & 1) != 0) || ((0.0 < in_stack_000000f0._4_4_ && ((unaff_x23 & 1) != 0)))) {
      if (unaff_x24 != 0) {
        FUN_03b562c4(&stack0x00000020,&stack0x000000f0,0);
        in_stack_000000d8 = in_stack_00000028;
        in_stack_000000d0 = in_stack_00000020;
        in_stack_000000e8 = in_stack_00000038;
        in_stack_000000e0 = in_stack_00000030;
        uVar2 = FUN_02f1f898(&stack0x000000d0);
        if ((uVar2 & 1) == 0) {
          FUN_03b5656c(&stack0x000000f0,0);
          goto LAB_0235806c;
        }
      }
      if (in_stack_00000180 != '\0') {
        FUN_03337264(&stack0x00000020,&stack0x00000180,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<Button>__);
        memcpy(&stack0x00000080,&stack0x00000020,0x50);
        if (in_stack_000000f0._4_4_ <= in_stack_00000080._4_4_) {
          FUN_03b5656c(&stack0x000000f0,0);
          goto LAB_0235806c;
        }
        if (in_stack_00000180 != '\0') {
          memcpy(&stack0x00000080,in_stack_00000018,0x50);
          FUN_03b5656c(&stack0x00000080,0);
        }
      }
      uVar5 = *unaff_x20;
      in_stack_00000070 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      memcpy(&stack0x00000210,&stack0x000000f0,0x50);
      FUN_0333722c(&stack0x00000020,&stack0x00000210,uVar5);
      memcpy(&stack0x00000180,&stack0x00000020,0x58);
      FUN_0332df1c(&stack0x00000210,&stack0x000001f0,*unaff_x19);
      in_stack_00000168 = 0;
      in_stack_00000160 = 0;
      in_stack_00000178 = 0;
      in_stack_00000170 = 0;
    }
    else {
      FUN_03b5656c(&stack0x000000f0,0);
    }
LAB_0235806c:
    lVar3 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_023580b8;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023580b8:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) break;
    lVar3 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x29) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02358114;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02358114:
    (*(code *)*puVar1)(&stack0x00000020);
    in_stack_00000148 = in_stack_00000028;
    in_stack_00000140 = in_stack_00000020;
    in_stack_00000150 = in_stack_00000030;
    FUN_02359c38(&stack0x00000020,&stack0x00000140);
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02358320;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02358320:
    (*(code *)*puVar1)();
  }
  memcpy(in_stack_00000010,(void *)((ulong)&stack0x00000180 | 8),0x50);
  thunk_FUN_01f51358((long)in_stack_00000010 + 0x48,0);
  in_stack_00000008[2] = in_stack_00000178;
  in_stack_00000008[1] = in_stack_00000170;
  *in_stack_00000008 = in_stack_00000168;
  thunk_FUN_01f51358(in_stack_00000008,0);
  return in_stack_00000180 != '\0';
}


