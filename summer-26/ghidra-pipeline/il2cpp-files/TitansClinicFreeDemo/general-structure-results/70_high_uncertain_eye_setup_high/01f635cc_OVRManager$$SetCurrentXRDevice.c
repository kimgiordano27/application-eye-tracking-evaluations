/*
FUNCTION_NAME: OVRManager$$SetCurrentXRDevice
ENTRY_POINT: 01f635cc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__SetCurrentXRDevice(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_x19;
  int unaff_w20;
  int *unaff_x21;
  undefined4 *puVar4;
  int unaff_w23;
  ulong unaff_x24;
  undefined4 unaff_w25;
  int unaff_w26;
  int unaff_w27;
  
  if (unaff_w20 < unaff_w26) {
    iVar3 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_0141c850();
    puVar4 = puVar1;
    if ((unaff_x24 & 1) == 0) {
      puVar4 = (undefined4 *)((long)puVar1 + 2);
      *(short *)puVar1 = (short)unaff_w25;
    }
    if (unaff_w23 == 0) {
      FUN_01f63300(puVar4,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_01f63300(puVar4 + 2,*unaff_x21 >> 8);
      if (unaff_w27 == 0) {
        puVar1 = puVar4 + 4;
      }
      else {
        puVar1 = (undefined4 *)((long)puVar4 + 0x12);
        *(undefined2 *)(puVar4 + 4) = 0x2d;
      }
      FUN_01f63300(puVar1,(int)(short)unaff_x21[1] >> 8);
      if (unaff_w27 == 0) {
        puVar4 = puVar1 + 2;
      }
      else {
        puVar4 = (undefined4 *)((long)puVar1 + 10);
        *(undefined2 *)(puVar1 + 2) = 0x2d;
      }
      FUN_01f63300(puVar4,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      if (unaff_w27 == 0) {
        puVar1 = puVar4 + 2;
      }
      else {
        puVar1 = (undefined4 *)((long)puVar4 + 10);
        *(undefined2 *)(puVar4 + 2) = 0x2d;
      }
      FUN_01f63300(puVar1,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      if (unaff_w27 == 0) {
        puVar2 = puVar1 + 2;
      }
      else {
        puVar2 = (undefined4 *)((long)puVar1 + 10);
        *(undefined2 *)(puVar1 + 2) = 0x2d;
      }
      FUN_01f63300(puVar2,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      FUN_01f63300(puVar2 + 2,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      FUN_01f63300(puVar2 + 4,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar2 = puVar2 + 6;
    }
    else {
      *puVar4 = 0x780030;
      FUN_01f63300(puVar4 + 1,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_01f63300(puVar4 + 3,*unaff_x21 >> 8);
      puVar4[5] = 0x30002c;
      *(undefined2 *)(puVar4 + 6) = 0x78;
      FUN_01f63300((long)puVar4 + 0x1a,(int)(short)unaff_x21[1] >> 8);
      *(undefined4 *)((long)puVar4 + 0x22) = 0x30002c;
      *(undefined2 *)((long)puVar4 + 0x26) = 0x78;
      FUN_01f63300(puVar4 + 10,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      puVar4[0xc] = 0x7b002c;
      FUN_01f6337c(puVar4 + 0xd,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      *(undefined2 *)((long)puVar4 + 0x46) = 0x2c;
      FUN_01f6337c(puVar4 + 0x12,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      *(undefined2 *)((long)puVar4 + 0x5a) = 0x2c;
      FUN_01f6337c(puVar4 + 0x17,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      *(undefined2 *)((long)puVar4 + 0x6e) = 0x2c;
      FUN_01f6337c(puVar4 + 0x1c,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar2 = puVar4 + 0x21;
      *(undefined2 *)((long)puVar4 + 0x82) = 0x7d;
    }
    iVar3 = unaff_w26;
    if ((unaff_x24 & 1) == 0) {
      *(short *)puVar2 = (short)((uint)unaff_w25 >> 0x10);
    }
  }
  *unaff_x19 = iVar3;
  return unaff_w26 <= unaff_w20;
}


