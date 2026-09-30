/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$op_Implicit
ENTRY_POINT: 052e0a34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__op_Implicit(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  long in_stack_00000018;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar4 = *unaff_x21;
    uVar5 = unaff_x21[1];
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
    uVar3 = FUN_05e891f8(lVar1,uVar4,uVar5,&stack0x00000018,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
    lVar1 = in_stack_00000018;
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      uVar3 = FUN_052e0d30();
      if ((uVar3 & 1) == 0) {
        thunk_FUN_03af1434(PTR_DAT_08492c00);
        thunk_FUN_03ac70f4();
        thunk_FUN_03af1434(PTR_DAT_084948c8);
        uVar4 = FUN_065ce754();
        thunk_FUN_03af1434(PTR_DAT_08486870);
        uVar5 = thunk_FUN_03ac74bc();
        FUN_06750b68(uVar5,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar5);
      }
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
      if (lVar1 != 0) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *unaff_x21;
        uVar5 = unaff_x21[1];
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        uVar3 = FUN_05e891f8(lVar1,uVar4,uVar5,&stack0x00000010,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf8));
        if ((uVar3 & 1) != 0) {
          lVar1 = FUN_0666c8dc();
          if (lVar1 == 0) goto LAB_052e0cbc;
          FUN_0666c99c(lVar1,0);
        }
        lVar1 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03ac4090();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03ac4090();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar1 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03ac4090();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03ac4090();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
        if (lVar1 != 0) {
          System_Collections_Generic_Dictionary<object,_DateTime>__GetEnumerator
                    (lVar1,*unaff_x21,unaff_x21[1]);
          if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          FUN_052e0fb4();
          return;
        }
      }
    }
    else if (in_stack_00000018 != 0) {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_0589fd00(lVar1);
      return;
    }
  }
LAB_052e0cbc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


